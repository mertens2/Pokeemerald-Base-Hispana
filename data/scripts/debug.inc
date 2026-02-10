# 1 "data/scripts/debug.pory"
Debug_MessageEnd:
# 2 "data/scripts/debug.pory"
	waitmessage
# 3 "data/scripts/debug.pory"
	waitbuttonpress
# 4 "data/scripts/debug.pory"
	releaseall
# 5 "data/scripts/debug.pory"
	end
# 6 "data/scripts/debug.pory"

# 7 "data/scripts/debug.pory"
Debug_ShowFieldMessageStringVar4::
# 8 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 9 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 10 "data/scripts/debug.pory"

# 11 "data/scripts/debug.pory"
Debug_CheatStart::
# 12 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEMON_GET
# 13 "data/scripts/debug.pory"
	setflag FLAG_RESCUED_BIRCH
# 14 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 15 "data/scripts/debug.pory"
	setflag FLAG_ADVENTURE_STARTED
# 16 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 17 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 18 "data/scripts/debug.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 19 "data/scripts/debug.pory"
	setvar VAR_ROUTE101_STATE, 3
# 20 "data/scripts/debug.pory"
	givemon SPECIES_TREECKO, 20, ITEM_NONE
# 21 "data/scripts/debug.pory"
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
# 22 "data/scripts/debug.pory"
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
# 23 "data/scripts/debug.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 24 "data/scripts/debug.pory"
	special SetUnlockedPokedexFlags
# 25 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 26 "data/scripts/debug.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
# 27 "data/scripts/debug.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 28 "data/scripts/debug.pory"
	special EnableNationalPokedex
# 29 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4: Received Running Shoes
# 30 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
# 31 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
# 33 "data/scripts/debug.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
# 34 "data/scripts/debug.pory"
	setflag FLAG_RECEIVED_BIKE
# 35 "data/scripts/debug.pory"
	additem ITEM_ACRO_BIKE
# 36 "data/scripts/debug.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 37 "data/scripts/debug.pory"
	setvar VAR_ROUTE116_STATE, 2
# 38 "data/scripts/debug.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 39 "data/scripts/debug.pory"
	setflag FLAG_BADGE01_GET
# 40 "data/scripts/debug.pory"
	setflag FLAG_BADGE02_GET
# 41 "data/scripts/debug.pory"
	setflag FLAG_BADGE03_GET
# 42 "data/scripts/debug.pory"
	setflag FLAG_BADGE04_GET
# 43 "data/scripts/debug.pory"
	setflag FLAG_BADGE05_GET
# 44 "data/scripts/debug.pory"
	setflag FLAG_BADGE06_GET
# 45 "data/scripts/debug.pory"
	setflag FLAG_BADGE07_GET
# 46 "data/scripts/debug.pory"
	setflag FLAG_BADGE08_GET
# 47 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 48 "data/scripts/debug.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 49 "data/scripts/debug.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 50 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 51 "data/scripts/debug.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 52 "data/scripts/debug.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 53 "data/scripts/debug.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 54 "data/scripts/debug.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 55 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 56 "data/scripts/debug.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 57 "data/scripts/debug.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 58 "data/scripts/debug.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 59 "data/scripts/debug.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 60 "data/scripts/debug.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 61 "data/scripts/debug.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 62 "data/scripts/debug.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 63 "data/scripts/debug.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 64 "data/scripts/debug.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 65 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 66 "data/scripts/debug.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 67 "data/scripts/debug.pory"
	release
# 68 "data/scripts/debug.pory"
	end
# 69 "data/scripts/debug.pory"

# 70 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage::
# 71 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text
# 72 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 73 "data/scripts/debug.pory"

# 74 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage_Text:
# 75 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 76 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 77 "data/scripts/debug.pory"
	.string "'include/config/overworld.h'!$"
# 78 "data/scripts/debug.pory"

# 79 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage::
# 80 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text
# 81 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 82 "data/scripts/debug.pory"

# 83 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage_Text:
# 84 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 85 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 86 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 87 "data/scripts/debug.pory"

# 88 "data/scripts/debug.pory"
Debug_VarsNotSetBattleConfigMessage::
# 89 "data/scripts/debug.pory"
	message Debug_VarsNotSetBattleConfigMessage_Text
# 90 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 91 "data/scripts/debug.pory"

# 92 "data/scripts/debug.pory"
Debug_VarsNotSetBattleConfigMessage_Text:
# 93 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 94 "data/scripts/debug.pory"
	.string "Please define a usable var in:\l"
# 95 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 96 "data/scripts/debug.pory"

# 97 "data/scripts/debug.pory"
Debug_BoxFilledMessage::
# 98 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text
# 99 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 100 "data/scripts/debug.pory"

# 101 "data/scripts/debug.pory"
Debug_BoxFilledMessage_Text:
# 102 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"
# 103 "data/scripts/debug.pory"

# 104 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs::
# 105 "data/scripts/debug.pory"
	lockall
# 106 "data/scripts/debug.pory"
	getpartysize
# 107 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 108 "data/scripts/debug.pory"
	special ChoosePartyMon
# 109 "data/scripts/debug.pory"
	waitstate
# 110 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 111 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 112 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
# 113 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 114 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
# 115 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs_End::
# 116 "data/scripts/debug.pory"
	releaseall
# 117 "data/scripts/debug.pory"
	end
# 118 "data/scripts/debug.pory"

# 119 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveEVs:
# 120 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"
# 121 "data/scripts/debug.pory"

# 122 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveEVs:
# 123 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"
# 124 "data/scripts/debug.pory"

# 125 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs::
# 126 "data/scripts/debug.pory"
	lockall
# 127 "data/scripts/debug.pory"
	getpartysize
# 128 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 129 "data/scripts/debug.pory"
	special ChoosePartyMon
# 130 "data/scripts/debug.pory"
	waitstate
# 131 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 132 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 133 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
# 134 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 135 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
# 136 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs_End::
# 137 "data/scripts/debug.pory"
	releaseall
# 138 "data/scripts/debug.pory"
	end
# 139 "data/scripts/debug.pory"

# 140 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveIVs:
# 141 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"
# 142 "data/scripts/debug.pory"

# 143 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveIVs:
# 144 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"
# 145 "data/scripts/debug.pory"

# 146 "data/scripts/debug.pory"
Debug_EventScript_Script_1::
# 147 "data/scripts/debug.pory"
	setwildbattle SPECIES_GOLEM, 100, ITEM_NONE, SPECIES_CHARIZARD, 100, ITEM_NONE
# 148 "data/scripts/debug.pory"
	dowildbattle
# 149 "data/scripts/debug.pory"
	release
# 150 "data/scripts/debug.pory"
	end
# 151 "data/scripts/debug.pory"

# 152 "data/scripts/debug.pory"
Debug_EventScript_Script_2::
# 153 "data/scripts/debug.pory"
	setwildbattle SPECIES_DITTO, 100, ITEM_NONE
# 154 "data/scripts/debug.pory"
	dowildbattle
# 155 "data/scripts/debug.pory"
	release
# 156 "data/scripts/debug.pory"
	end
# 157 "data/scripts/debug.pory"

# 158 "data/scripts/debug.pory"
Debug_EventScript_Script_3::
# 159 "data/scripts/debug.pory"
	setvar 0x8001, 1
# 160 "data/scripts/debug.pory"
    call MiningGame_Event
# 161 "data/scripts/debug.pory"
	release
# 162 "data/scripts/debug.pory"
	end
# 163 "data/scripts/debug.pory"

# 164 "data/scripts/debug.pory"
Debug_EventScript_Script_4::
# 165 "data/scripts/debug.pory"
	release
# 166 "data/scripts/debug.pory"
	end
# 167 "data/scripts/debug.pory"

# 168 "data/scripts/debug.pory"
Debug_EventScript_Script_5::
# 169 "data/scripts/debug.pory"
	release
# 170 "data/scripts/debug.pory"
	end
# 171 "data/scripts/debug.pory"

# 172 "data/scripts/debug.pory"
Debug_EventScript_Script_6::
# 173 "data/scripts/debug.pory"
	release
# 174 "data/scripts/debug.pory"
	end
# 175 "data/scripts/debug.pory"

# 176 "data/scripts/debug.pory"
Debug_EventScript_Script_7::
# 177 "data/scripts/debug.pory"
	release
# 178 "data/scripts/debug.pory"
	end
# 179 "data/scripts/debug.pory"

# 180 "data/scripts/debug.pory"
Debug_EventScript_Script_8::
# 181 "data/scripts/debug.pory"
	release
# 182 "data/scripts/debug.pory"
	end
# 183 "data/scripts/debug.pory"

# 184 "data/scripts/debug.pory"
Debug_CheckSaveBlock::
# 185 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 186 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 187 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 188 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 189 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 190 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
# 191 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 192 "data/scripts/debug.pory"
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 193 "data/scripts/debug.pory"
	release
# 194 "data/scripts/debug.pory"
	end
# 195 "data/scripts/debug.pory"

# 196 "data/scripts/debug.pory"
Debug_SaveBlock1Size::
# 197 "data/scripts/debug.pory"
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 198 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 199 "data/scripts/debug.pory"

# 200 "data/scripts/debug.pory"
Debug_SaveBlock2Size::
# 201 "data/scripts/debug.pory"
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 202 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 203 "data/scripts/debug.pory"

# 204 "data/scripts/debug.pory"
Debug_SaveBlock3Size::
# 205 "data/scripts/debug.pory"
	.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 206 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 207 "data/scripts/debug.pory"

# 208 "data/scripts/debug.pory"
Debug_PokemonStorageSize::
# 209 "data/scripts/debug.pory"
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 210 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 211 "data/scripts/debug.pory"

# 212 "data/scripts/debug.pory"
Debug_CheckROMSpace::
# 213 "data/scripts/debug.pory"
	callnative CheckROMSize
# 214 "data/scripts/debug.pory"
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 215 "data/scripts/debug.pory"
	release
# 216 "data/scripts/debug.pory"
	end
# 217 "data/scripts/debug.pory"

# 218 "data/scripts/debug.pory"
Debug_ROMSize::
# 219 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 220 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_2}MB.$"
# 221 "data/scripts/debug.pory"

# 222 "data/scripts/debug.pory"
Debug_CheckPokemonSize::
# 223 "data/scripts/debug.pory"
	callnative CheckPokemonSize
# 224 "data/scripts/debug.pory"
	msgbox Debug_PokemonSize, MSGBOX_DEFAULT
# 225 "data/scripts/debug.pory"
	release
# 226 "data/scripts/debug.pory"
	end
# 227 "data/scripts/debug.pory"

# 228 "data/scripts/debug.pory"
Debug_PokemonSize::
# 229 "data/scripts/debug.pory"
	.string "Box Pokémon size: {STR_VAR_1}.\n"
# 230 "data/scripts/debug.pory"
	.string "Pokémon size:         {STR_VAR_2}.$"
# 231 "data/scripts/debug.pory"

# 232 "data/scripts/debug.pory"

# 233 "data/scripts/debug.pory"
Debug_HatchAnEgg::
# 234 "data/scripts/debug.pory"
	lockall
# 235 "data/scripts/debug.pory"
	getpartysize
# 236 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 237 "data/scripts/debug.pory"
	special ChoosePartyMon
# 238 "data/scripts/debug.pory"
	waitstate
# 239 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 240 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 241 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 242 "data/scripts/debug.pory"
	special EggHatch
# 243 "data/scripts/debug.pory"
	waitstate
# 244 "data/scripts/debug.pory"
Debug_HatchAnEgg_End::
# 245 "data/scripts/debug.pory"
	releaseall
# 246 "data/scripts/debug.pory"
	end
# 247 "data/scripts/debug.pory"

# 248 "data/scripts/debug.pory"
Debug_NoPokemon::
# 249 "data/scripts/debug.pory"
	msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
# 250 "data/scripts/debug.pory"
	releaseall
# 251 "data/scripts/debug.pory"
	end
# 252 "data/scripts/debug.pory"

# 253 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_CantForceHatch::
# 254 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 255 "data/scripts/debug.pory"
	releaseall
# 256 "data/scripts/debug.pory"
	end
# 257 "data/scripts/debug.pory"

# 258 "data/scripts/debug.pory"
DebugScript_Text_EmptyParty::
# 259 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"
# 260 "data/scripts/debug.pory"

# 261 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_Text_NotAnEgg::
# 262 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"
# 263 "data/scripts/debug.pory"

# 264 "data/scripts/debug.pory"
DebugScript_ZeroDaycareMons::
# 265 "data/scripts/debug.pory"
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 266 "data/scripts/debug.pory"
	releaseall
# 267 "data/scripts/debug.pory"
	end
# 268 "data/scripts/debug.pory"

# 269 "data/scripts/debug.pory"
DebugScript_OneDaycareMons::
# 270 "data/scripts/debug.pory"
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 271 "data/scripts/debug.pory"
	releaseall
# 272 "data/scripts/debug.pory"
	end
# 273 "data/scripts/debug.pory"

# 274 "data/scripts/debug.pory"
DebugScript_DaycareMonsNotCompatible::
# 275 "data/scripts/debug.pory"
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 276 "data/scripts/debug.pory"
	releaseall
# 277 "data/scripts/debug.pory"
	end
# 278 "data/scripts/debug.pory"

# 279 "data/scripts/debug.pory"
DebugText_DaycareNoPokemon:
# 280 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"
# 281 "data/scripts/debug.pory"

# 282 "data/scripts/debug.pory"
DebugText_DaycareOnePokemon:
# 283 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"
# 284 "data/scripts/debug.pory"

# 285 "data/scripts/debug.pory"
DebugText_DaycarePokemonNotCompatible:
# 286 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 287 "data/scripts/debug.pory"

# 288 "data/scripts/debug.pory"
Debug_ShowExpansionVersion::
# 289 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 290 "data/scripts/debug.pory"
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 291 "data/scripts/debug.pory"
	release
# 292 "data/scripts/debug.pory"
	end
# 293 "data/scripts/debug.pory"

# 294 "data/scripts/debug.pory"
Debug_ExpansionVersion:
# 295 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"
# 296 "data/scripts/debug.pory"

# 297 "data/scripts/debug.pory"
Debug_Follower_NPC_Not_Enabled::
# 298 "data/scripts/debug.pory"
	msgbox Debug_Enable_To_Use_Follower_NPCs, MSGBOX_DEFAULT
# 299 "data/scripts/debug.pory"
	release
# 300 "data/scripts/debug.pory"
	end
# 301 "data/scripts/debug.pory"

# 302 "data/scripts/debug.pory"
Debug_Enable_To_Use_Follower_NPCs:
# 303 "data/scripts/debug.pory"
	.string "Feature unavailable.\nSet FNPC_ENABLE_NPC_FOLLOWERS to\lTRUE in 'include/config/follower_npc.h'.$"
# 304 "data/scripts/debug.pory"

# 305 "data/scripts/debug.pory"
Debug_Follower_NPC_Event_Script::
# 306 "data/scripts/debug.pory"
	lock
# 307 "data/scripts/debug.pory"
	facefollowernpc
# 308 "data/scripts/debug.pory"
	msgbox Debug_Follower_NPC_Test_Message, MSGBOX_DEFAULT
# 309 "data/scripts/debug.pory"
	releaseall
# 310 "data/scripts/debug.pory"
	end
# 311 "data/scripts/debug.pory"

# 312 "data/scripts/debug.pory"
Debug_Follower_NPC_Test_Message:
# 313 "data/scripts/debug.pory"
	.string "This is a Follower NPC test.$"
# 314 "data/scripts/debug.pory"

# 315 "data/scripts/debug.pory"
Debug_EventScript_Steven_Multi::
# 316 "data/scripts/debug.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 317 "data/scripts/debug.pory"
	release
# 318 "data/scripts/debug.pory"
	end
# 319 "data/scripts/debug.pory"

# 320 "data/scripts/debug.pory"
Debug_BerryPestsDisabled::
# 321 "data/scripts/debug.pory"
	msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
# 322 "data/scripts/debug.pory"
	release
# 323 "data/scripts/debug.pory"
	end
# 324 "data/scripts/debug.pory"

# 325 "data/scripts/debug.pory"
DebugText_BerryPestsDisabled:
# 326 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
# 327 "data/scripts/debug.pory"
	.string "Unable to force pests onto berry trees.$"
# 328 "data/scripts/debug.pory"

# 329 "data/scripts/debug.pory"
Debug_BerryWeedsDisabled::
# 330 "data/scripts/debug.pory"
	msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
# 331 "data/scripts/debug.pory"
	release
# 332 "data/scripts/debug.pory"
	end
# 333 "data/scripts/debug.pory"

# 334 "data/scripts/debug.pory"
DebugText_BerryWeedsDisabled:
# 335 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
# 336 "data/scripts/debug.pory"
	.string "Unable to force weeds onto berry trees.$"
# 337 "data/scripts/debug.pory"

# 338 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1::
# 339 "data/scripts/debug.pory"
	lockall
# 340 "data/scripts/debug.pory"
	getpartysize
# 341 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 342 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 343 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 344 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 345 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 346 "data/scripts/debug.pory"
	switch VAR_RESULT
# 347 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single
# 348 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party
# 349 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Close
# 350 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Close:
# 351 "data/scripts/debug.pory"
	releaseall
# 352 "data/scripts/debug.pory"
	end
# 353 "data/scripts/debug.pory"

# 354 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single:
# 355 "data/scripts/debug.pory"
	special ChoosePartyMon
# 356 "data/scripts/debug.pory"
	waitstate
# 357 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 358 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 359 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 360 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 361 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 362 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 363 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 364 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 365 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 366 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 367 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 368 "data/scripts/debug.pory"
	switch VAR_RESULT
# 369 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_Poison
# 370 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
# 371 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_Sleep
# 372 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_Burn
# 373 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_Freeze
# 374 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
# 375 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 376 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 377 "data/scripts/debug.pory"
	releaseall
# 378 "data/scripts/debug.pory"
	end
# 379 "data/scripts/debug.pory"

# 380 "data/scripts/debug.pory"
Debug_EventScript_SetHiddenNature::
# 381 "data/scripts/debug.pory"
	special ChoosePartyMon
# 382 "data/scripts/debug.pory"
	waitstate
# 383 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 384 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 385 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 386 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Hardy, 0
# 387 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Lonely, 1
# 388 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Brave, 2
# 389 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Adamant, 3
# 390 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Naughty, 4
# 391 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Bold, 5
# 392 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Docile, 6
# 393 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Relaxed, 7
# 394 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Impish, 8
# 395 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Lax, 9
# 396 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Timid, 10
# 397 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Hasty, 11
# 398 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Serious, 12
# 399 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Jolly, 13
# 400 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Naive, 14
# 401 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Modest, 15
# 402 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Mild, 16
# 403 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Quiet, 17
# 404 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Bashful, 18
# 405 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Rash, 19
# 406 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Calm, 20
# 407 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Gentle, 21
# 408 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Sassy, 22
# 409 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Careful, 23
# 410 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_ChangeNature_Text_Quirky, 24
# 411 "data/scripts/debug.pory"
	dynmultistack 0, 0, TRUE, 7, FALSE, 0, NULL
# 412 "data/scripts/debug.pory"
	switch VAR_RESULT
# 413 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 414 "data/scripts/debug.pory"
	special SetHiddenNature
# 415 "data/scripts/debug.pory"
	releaseall
# 416 "data/scripts/debug.pory"
	end
# 417 "data/scripts/debug.pory"

# 418 "data/scripts/debug.pory"
Debug_EventScript_SetAbility::
# 419 "data/scripts/debug.pory"
	special ChoosePartyMon
# 420 "data/scripts/debug.pory"
	waitstate
# 421 "data/scripts/debug.pory"
	callnative DebugNative_GetAbilityNames
# 422 "data/scripts/debug.pory"
	dynmultipush gStringVar1, 0
# 423 "data/scripts/debug.pory"
	dynmultipush gStringVar2, 1
# 424 "data/scripts/debug.pory"
	dynmultipush gStringVar3, 2
# 425 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 426 "data/scripts/debug.pory"
	switch VAR_RESULT
# 427 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_SetAbilityClose
# 428 "data/scripts/debug.pory"
	special SetAbility
# 429 "data/scripts/debug.pory"
Debug_EventScript_SetAbilityClose:
# 430 "data/scripts/debug.pory"
	releaseall
# 431 "data/scripts/debug.pory"
	end
# 432 "data/scripts/debug.pory"

# 433 "data/scripts/debug.pory"
Debug_EventScript_SetFriendship::
# 434 "data/scripts/debug.pory"
	special ChoosePartyMon
# 435 "data/scripts/debug.pory"
	waitstate
# 436 "data/scripts/debug.pory"
	callnative DebugNative_Party_SetFriendship
# 437 "data/scripts/debug.pory"
	releaseall
# 438 "data/scripts/debug.pory"
	end
# 439 "data/scripts/debug.pory"

# 440 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Poison:
# 441 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 442 "data/scripts/debug.pory"
	releaseall
# 443 "data/scripts/debug.pory"
	end
# 444 "data/scripts/debug.pory"

# 445 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Paralysis:
# 446 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 447 "data/scripts/debug.pory"
	releaseall
# 448 "data/scripts/debug.pory"
	end
# 449 "data/scripts/debug.pory"

# 450 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Sleep:
# 451 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 452 "data/scripts/debug.pory"
	releaseall
# 453 "data/scripts/debug.pory"
	end
# 454 "data/scripts/debug.pory"

# 455 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Burn:
# 456 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 457 "data/scripts/debug.pory"
	releaseall
# 458 "data/scripts/debug.pory"
	end
# 459 "data/scripts/debug.pory"

# 460 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Freeze:
# 461 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 462 "data/scripts/debug.pory"
	releaseall
# 463 "data/scripts/debug.pory"
	end
# 464 "data/scripts/debug.pory"

# 465 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Frostbite:
# 466 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 467 "data/scripts/debug.pory"
	releaseall
# 468 "data/scripts/debug.pory"
	end
# 469 "data/scripts/debug.pory"

# 470 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party:
# 471 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 472 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 473 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 474 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 475 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 476 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 477 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 478 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 479 "data/scripts/debug.pory"
	switch VAR_RESULT
# 480 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_Poison
# 481 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
# 482 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_Sleep
# 483 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_Burn
# 484 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_Freeze
# 485 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
# 486 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 487 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 488 "data/scripts/debug.pory"
	releaseall
# 489 "data/scripts/debug.pory"
	end
# 490 "data/scripts/debug.pory"

# 491 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Poison:
# 492 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 493 "data/scripts/debug.pory"
	releaseall
# 494 "data/scripts/debug.pory"
	end
# 495 "data/scripts/debug.pory"

# 496 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Paralysis:
# 497 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 498 "data/scripts/debug.pory"
	releaseall
# 499 "data/scripts/debug.pory"
	end
# 500 "data/scripts/debug.pory"

# 501 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Sleep:
# 502 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 503 "data/scripts/debug.pory"
	releaseall
# 504 "data/scripts/debug.pory"
	end
# 505 "data/scripts/debug.pory"

# 506 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Burn:
# 507 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 508 "data/scripts/debug.pory"
	releaseall
# 509 "data/scripts/debug.pory"
	end
# 510 "data/scripts/debug.pory"

# 511 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Freeze:
# 512 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 513 "data/scripts/debug.pory"
	releaseall
# 514 "data/scripts/debug.pory"
	end
# 515 "data/scripts/debug.pory"

# 516 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Frostbite:
# 517 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 518 "data/scripts/debug.pory"
	releaseall
# 519 "data/scripts/debug.pory"
	end
# 520 "data/scripts/debug.pory"

# 521 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Single:
# 522 "data/scripts/debug.pory"
	.string "Single$"
# 523 "data/scripts/debug.pory"

# 524 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_PartyWide:
# 525 "data/scripts/debug.pory"
	.string "Party-wide$"
# 526 "data/scripts/debug.pory"

# 527 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Close:
# 528 "data/scripts/debug.pory"
	.string "Close$"
# 529 "data/scripts/debug.pory"

# 530 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Poison:
# 531 "data/scripts/debug.pory"
	.string "Poison$"
# 532 "data/scripts/debug.pory"

# 533 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Paralysis:
# 534 "data/scripts/debug.pory"
	.string "Paralysis$"
# 535 "data/scripts/debug.pory"

# 536 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Sleep:
# 537 "data/scripts/debug.pory"
	.string "Sleep$"
# 538 "data/scripts/debug.pory"

# 539 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Burn:
# 540 "data/scripts/debug.pory"
	.string "Burn$"
# 541 "data/scripts/debug.pory"

# 542 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Freeze:
# 543 "data/scripts/debug.pory"
	.string "Freeze$"
# 544 "data/scripts/debug.pory"

# 545 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Frostbite:
# 546 "data/scripts/debug.pory"
	.string "Frostbite$"
# 547 "data/scripts/debug.pory"

# 548 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Hardy:
# 549 "data/scripts/debug.pory"
	.string "Hardy$"
# 550 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Lonely:
# 551 "data/scripts/debug.pory"
	.string "Lonely$"
# 552 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Brave:
# 553 "data/scripts/debug.pory"
	.string "Brave$"
# 554 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Adamant:
# 555 "data/scripts/debug.pory"
	.string "Adamant$"
# 556 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Naughty:
# 557 "data/scripts/debug.pory"
	.string "Naughty$"
# 558 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Bold:
# 559 "data/scripts/debug.pory"
	.string "Bold$"
# 560 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Docile:
# 561 "data/scripts/debug.pory"
	.string "Docile$"
# 562 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Relaxed:
# 563 "data/scripts/debug.pory"
	.string "Relaxed$"
# 564 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Impish:
# 565 "data/scripts/debug.pory"
	.string "Impish$"
# 566 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Lax:
# 567 "data/scripts/debug.pory"
	.string "Lax$"
# 568 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Timid:
# 569 "data/scripts/debug.pory"
	.string "Timid$"
# 570 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Hasty:
# 571 "data/scripts/debug.pory"
	.string "Hasty$"
# 572 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Serious:
# 573 "data/scripts/debug.pory"
	.string "Serious$"
# 574 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Jolly:
# 575 "data/scripts/debug.pory"
	.string "Jolly$"
# 576 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Naive:
# 577 "data/scripts/debug.pory"
	.string "Naive$"
# 578 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Modest:
# 579 "data/scripts/debug.pory"
	.string "Modest$"
# 580 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Mild:
# 581 "data/scripts/debug.pory"
	.string "Mild$"
# 582 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Quiet:
# 583 "data/scripts/debug.pory"
	.string "Quiet$"
# 584 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Bashful:
# 585 "data/scripts/debug.pory"
	.string "Bashful$"
# 586 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Rash:
# 587 "data/scripts/debug.pory"
	.string "Rash$"
# 588 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Calm:
# 589 "data/scripts/debug.pory"
	.string "Calm$"
# 590 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Gentle:
# 591 "data/scripts/debug.pory"
	.string "Gentle$"
# 592 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Sassy:
# 593 "data/scripts/debug.pory"
	.string "Sassy$"
# 594 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Careful:
# 595 "data/scripts/debug.pory"
	.string "Careful$"
# 596 "data/scripts/debug.pory"
Debug_EventScript_ChangeNature_Text_Quirky:
# 597 "data/scripts/debug.pory"
	.string "Quirky$"
# 598 "data/scripts/debug.pory"

# 599 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters::
# 600 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 601 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
# 602 "data/scripts/debug.pory"
	release
# 603 "data/scripts/debug.pory"
	end
# 604 "data/scripts/debug.pory"

# 605 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters_Text::
# 606 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
# 607 "data/scripts/debug.pory"
	.string "Fishing Chain: {STR_VAR_2}.$"
# 608 "data/scripts/debug.pory"

# 609 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_1::
# 610 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 611 "data/scripts/debug.pory"
	.string "Angel Adept Blind Bodice Clique\n"
# 612 "data/scripts/debug.pory"
	.string "Coast Dunce Docile Enact Eosin\l"
# 613 "data/scripts/debug.pory"
	.string "Furlong Focal Gnome Gondola Human\l"
# 614 "data/scripts/debug.pory"
	.string "Hoist Inlet Iodine Justin Jocose\l"
# 615 "data/scripts/debug.pory"
	.string "Knoll Koala Linden Loads Milliner\l"
# 616 "data/scripts/debug.pory"
	.string "Modal Number Nodule Onset Oddball\l"
# 617 "data/scripts/debug.pory"
	.string "Pneumo Poncho Quanta Qophs Rhone\l"
# 618 "data/scripts/debug.pory"
	.string "Roman Snout Sodium Tundra Tocsin\l"
# 619 "data/scripts/debug.pory"
	.string "Uncle Udder Vulcan Vocal Whale\l"
# 620 "data/scripts/debug.pory"
	.string "Woman Xmas Xenon Yunnan Young\l"
# 621 "data/scripts/debug.pory"
	.string "Zloty Zodiac.$"
# 622 "data/scripts/debug.pory"

# 623 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_2::
# 624 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 625 "data/scripts/debug.pory"
	.string "Angel angel adept for the nuance loads\n"
# 626 "data/scripts/debug.pory"
	.string "of the arena cocoa and quaalude. Blind\l"
# 627 "data/scripts/debug.pory"
	.string "blind bodice for the submit oboe of the\l"
# 628 "data/scripts/debug.pory"
	.string "club snob and abbot. Clique clique\l"
# 629 "data/scripts/debug.pory"
	.string "coast for the pouch loco of the franc\l"
# 630 "data/scripts/debug.pory"
	.string "assoc and accede. Dunce dunce docile\l"
# 631 "data/scripts/debug.pory"
	.string "for the loudness mastodon of the\l"
# 632 "data/scripts/debug.pory"
	.string "loud statehood and huddle.$"
# 633 "data/scripts/debug.pory"

# 634 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_3::
# 635 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 636 "data/scripts/debug.pory"
	.string "Enact enact eosin for the quench coed\n"
# 637 "data/scripts/debug.pory"
	.string "of the pique canoe and bleep. Furlong\l"
# 638 "data/scripts/debug.pory"
	.string "furlong focal for the genuflect\l"
# 639 "data/scripts/debug.pory"
	.string "profound of the motif aloof and offers.\l"
# 640 "data/scripts/debug.pory"
	.string "Gnome gnome gondola for the impugn\l"
# 641 "data/scripts/debug.pory"
	.string "logos of the unplug analog and smuggle.\l"
# 642 "data/scripts/debug.pory"
	.string "Human human hoist for the buddhist\l"
# 643 "data/scripts/debug.pory"
	.string "alcohol of the riyadh caliph and\l"
# 644 "data/scripts/debug.pory"
	.string "bathhouse.$"
# 645 "data/scripts/debug.pory"

# 646 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_4::
# 647 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 648 "data/scripts/debug.pory"
	.string "Inlet inlet iodine for the quince\n"
# 649 "data/scripts/debug.pory"
	.string "champion of the ennui scampi and shiite.\l"
# 650 "data/scripts/debug.pory"
	.string "Justin justin jocose for the djibouti\l"
# 651 "data/scripts/debug.pory"
	.string "sojourn of the oranj raj and hajjis.\l"
# 652 "data/scripts/debug.pory"
	.string "Knoll knoll koala for the banknote\l"
# 653 "data/scripts/debug.pory"
	.string "lookout of the dybbuk outlook and\l"
# 654 "data/scripts/debug.pory"
	.string "trekked. Linden linden loads for the\l"
# 655 "data/scripts/debug.pory"
	.string "ulna monolog of the consul menthol and\l"
# 656 "data/scripts/debug.pory"
	.string "shallot.$"
# 657 "data/scripts/debug.pory"

# 658 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_5::
# 659 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 660 "data/scripts/debug.pory"
	.string "Milliner milliner modal for the alumna\n"
# 661 "data/scripts/debug.pory"
	.string "solomon of the album custom and summon.\l"
# 662 "data/scripts/debug.pory"
	.string "Number number nodule for the unmade\l"
# 663 "data/scripts/debug.pory"
	.string "economic of the shotgun bison and\l"
# 664 "data/scripts/debug.pory"
	.string "tunnel. Onset onset oddball for the\l"
# 665 "data/scripts/debug.pory"
	.string "abandon podium of the antiquo tempo\l"
# 666 "data/scripts/debug.pory"
	.string "and moonlit. Pneumo pneumo poncho for\l"
# 667 "data/scripts/debug.pory"
	.string "the dauphin opossum of the holdup\l"
# 668 "data/scripts/debug.pory"
	.string "bishop and supplies.$"
# 669 "data/scripts/debug.pory"

# 670 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_6::
# 671 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 672 "data/scripts/debug.pory"
	.string "Quanta quanta qophs for the inquest\n"
# 673 "data/scripts/debug.pory"
	.string "sheqel of the cinq coq and suqqu. Rhone\l"
# 674 "data/scripts/debug.pory"
	.string "rhone roman for the burnt porous of the\l"
# 675 "data/scripts/debug.pory"
	.string "lemur clamor and carrot. Snout snout\l"
# 676 "data/scripts/debug.pory"
	.string "sodium for the ensnare bosom of the\l"
# 677 "data/scripts/debug.pory"
	.string "genus pathos and missing. Tundra\l"
# 678 "data/scripts/debug.pory"
	.string "tundra tocsin for the nutmeg isotope\l"
# 679 "data/scripts/debug.pory"
	.string "of the peasant ingot and ottoman.$"
# 680 "data/scripts/debug.pory"

# 681 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_7::
# 682 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 683 "data/scripts/debug.pory"
	.string "Uncle uncle udder for the dunes cloud\n"
# 684 "data/scripts/debug.pory"
	.string "of the hindu thou and continuum. Vulcan\l"
# 685 "data/scripts/debug.pory"
	.string "vulcan vocal for the alluvial ovoid of\l"
# 686 "data/scripts/debug.pory"
	.string "the yugoslav chekhov and revved. Whale\l"
# 687 "data/scripts/debug.pory"
	.string "whale woman for the meanwhile blowout\l"
# 688 "data/scripts/debug.pory"
	.string "of the forepaw meadow and glowworm.\l"
# 689 "data/scripts/debug.pory"
	.string "Xmas xmas xenon for the bauxite\l"
# 690 "data/scripts/debug.pory"
	.string "doxology of the tableaux equinox and\l"
# 691 "data/scripts/debug.pory"
	.string "exxon.$"
# 692 "data/scripts/debug.pory"

# 693 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_8::
# 694 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 695 "data/scripts/debug.pory"
	.string "Yunnan yunnan young for the dynamo\n"
# 696 "data/scripts/debug.pory"
	.string "coyote of the obloquy employ and\l"
# 697 "data/scripts/debug.pory"
	.string "sayyid. Zloty zloty zodiac for the gizmo\l"
# 698 "data/scripts/debug.pory"
	.string "ozone of the franz laissez and buzzing.$"
# 699 "data/scripts/debug.pory"

# 700 "data/scripts/debug.pory"

# 701 "data/scripts/debug.pory"
Debug_EventScript_FontTest_Text_9::                 @ Special thanks to Nintendo for this nice pangram to test other glyphs
# 702 "data/scripts/debug.pory"
	.string "{FONT_SMALL_NARROWER}"                 @ Edit this to test your font
# 703 "data/scripts/debug.pory"
	.string "42 × 138 = 5796.\n"
# 704 "data/scripts/debug.pory"
	.string "Mr Jock, TV quiz PhD: bags 20% fewer\l"
# 705 "data/scripts/debug.pory"
	.string "lynx at a café; voilà, they're “worth”\l"
# 706 "data/scripts/debug.pory"
	.string "♂1/♀1 = ¥1. That's 10 + 9 - 8 = 11\l"
# 707 "data/scripts/debug.pory"
	.string "Nintendo GBA can connect to a Nintendo\l"
# 708 "data/scripts/debug.pory"
	.string "GameCube console! He claimed-though I don't\l"
# 709 "data/scripts/debug.pory"
	.string "believe him-to have done so in an eyes-shut\l"
# 710 "data/scripts/debug.pory"
	.string "state…?$"
# 711 "data/scripts/debug.pory"

# 712 "data/scripts/debug.pory"
Debug_PrintFontTest::
# 713 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_1, MSGBOX_DEFAULT
# 714 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_2, MSGBOX_DEFAULT
# 715 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_3, MSGBOX_DEFAULT
# 716 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_4, MSGBOX_DEFAULT
# 717 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_5, MSGBOX_DEFAULT
# 718 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_6, MSGBOX_DEFAULT
# 719 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_7, MSGBOX_DEFAULT
# 720 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_8, MSGBOX_DEFAULT
# 721 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FontTest_Text_9, MSGBOX_DEFAULT
# 722 "data/scripts/debug.pory"
	releaseall
# 723 "data/scripts/debug.pory"
	end
# 724 "data/scripts/debug.pory"

# 725 "data/scripts/debug.pory"
Debug_EventScript_FontTest::
# 726 "data/scripts/debug.pory"
	lockall
# 727 "data/scripts/debug.pory"
	goto Debug_PrintFontTest
# 728 "data/scripts/debug.pory"
@	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 729 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 730 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 731 "data/scripts/debug.pory"
@	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 732 "data/scripts/debug.pory"
@	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 733 "data/scripts/debug.pory"
@	switch VAR_RESULT
# 734 "data/scripts/debug.pory"
@	case 0, Debug_EventScript_InflictStatus1_Single
# 735 "data/scripts/debug.pory"
@	case 1, Debug_EventScript_InflictStatus1_Party
# 736 "data/scripts/debug.pory"
@	case 2, Debug_EventScript_InflictStatus1_Close
# 737 "data/scripts/debug.pory"
@Debug_EventScript_InflictStatus1_Close:
# 738 "data/scripts/debug.pory"
@	releaseall
# 739 "data/scripts/debug.pory"
@	end
# 740 "data/scripts/debug.pory"

# 741 "data/scripts/debug.pory"
Debug_EventScript_TellTheTime::
# 742 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTime
# 743 "data/scripts/debug.pory"
	msgbox Debug_EventScript_TellTheTime_Text_0, MSGBOX_DEFAULT
# 744 "data/scripts/debug.pory"
	waitmessage
# 745 "data/scripts/debug.pory"
	closemessage
# 746 "data/scripts/debug.pory"
	end
# 747 "data/scripts/debug.pory"

# 748 "data/scripts/debug.pory"
Debug_EventScript_PrintTimeOfDay::
# 749 "data/scripts/debug.pory"
	callnative DebugMenu_CalculateTimeOfDay
# 750 "data/scripts/debug.pory"
	msgbox DebugEventScript_PrintWeekday_Text_0, MSGBOX_DEFAULT
# 751 "data/scripts/debug.pory"
	waitmessage
# 752 "data/scripts/debug.pory"
	closemessage
# 753 "data/scripts/debug.pory"
	end
# 754 "data/scripts/debug.pory"

# 755 "data/scripts/debug.pory"
Debug_EventScript_FakeRTCNotEnabled::
# 756 "data/scripts/debug.pory"
	msgbox Debug_EventScript_FakeRTCNotEnabled_Text_0, MSGBOX_DEFAULT
# 757 "data/scripts/debug.pory"
	waitmessage
# 758 "data/scripts/debug.pory"
	closemessage
# 759 "data/scripts/debug.pory"
	return
# 760 "data/scripts/debug.pory"

# 761 "data/scripts/debug.pory"
Debug_EventScript_FakeRTCNotEnabled_Text_0:
# 762 "data/scripts/debug.pory"
	.string "You currently do not have Fake RTC\nenabled. Please enable it in include/\lconfig/overworld.h$"
# 763 "data/scripts/debug.pory"

# 764 "data/scripts/debug.pory"

# 765 "data/scripts/debug.pory"
Debug_EventScript_TellTheTime_Text_0:
# 766 "data/scripts/debug.pory"
	.string "Time and date:\n"
# 767 "data/scripts/debug.pory"
	.string "{STR_VAR_1}, {STR_VAR_2}:{STR_VAR_3}$"
# 768 "data/scripts/debug.pory"

# 769 "data/scripts/debug.pory"
DebugEventScript_PrintWeekday_Text_0:
# 770 "data/scripts/debug.pory"
	.string "Time of day: {STR_VAR_1}$"
