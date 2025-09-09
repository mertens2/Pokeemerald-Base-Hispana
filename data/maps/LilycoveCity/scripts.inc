# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 3 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 4 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 5 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity/scripts.pory"

# 7 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 8 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 9 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 10 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 11 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 12 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 13 "data/maps/LilycoveCity/scripts.pory"
	end
# 14 "data/maps/LilycoveCity/scripts.pory"

# 15 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 16 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 17 "data/maps/LilycoveCity/scripts.pory"
	end
# 18 "data/maps/LilycoveCity/scripts.pory"

# 19 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 20 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 21 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 22 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	return
# 33 "data/maps/LilycoveCity/scripts.pory"

# 34 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 35 "data/maps/LilycoveCity/scripts.pory"
	lock
# 36 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 37 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 38 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 39 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 40 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 41 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 42 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 43 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 44 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 45 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	release
# 47 "data/maps/LilycoveCity/scripts.pory"
	end
# 48 "data/maps/LilycoveCity/scripts.pory"

# 49 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 50 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity/scripts.pory"
	release
# 52 "data/maps/LilycoveCity/scripts.pory"
	end
# 53 "data/maps/LilycoveCity/scripts.pory"

# 54 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 55 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 56 "data/maps/LilycoveCity/scripts.pory"
	end
# 57 "data/maps/LilycoveCity/scripts.pory"

# 58 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 59 "data/maps/LilycoveCity/scripts.pory"
	lock
# 60 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 61 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 62 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 63 "data/maps/LilycoveCity/scripts.pory"
	release
# 64 "data/maps/LilycoveCity/scripts.pory"
	end
# 65 "data/maps/LilycoveCity/scripts.pory"

# 66 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 67 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 68 "data/maps/LilycoveCity/scripts.pory"
	release
# 69 "data/maps/LilycoveCity/scripts.pory"
	end
# 70 "data/maps/LilycoveCity/scripts.pory"

# 71 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 72 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 73 "data/maps/LilycoveCity/scripts.pory"
	end
# 74 "data/maps/LilycoveCity/scripts.pory"

# 75 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 76 "data/maps/LilycoveCity/scripts.pory"
	lock
# 77 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 78 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 79 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 80 "data/maps/LilycoveCity/scripts.pory"
	release
# 81 "data/maps/LilycoveCity/scripts.pory"
	end
# 82 "data/maps/LilycoveCity/scripts.pory"

# 83 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 84 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 85 "data/maps/LilycoveCity/scripts.pory"
	release
# 86 "data/maps/LilycoveCity/scripts.pory"
	end
# 87 "data/maps/LilycoveCity/scripts.pory"

# 88 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 89 "data/maps/LilycoveCity/scripts.pory"
	lock
# 90 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 91 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 92 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 93 "data/maps/LilycoveCity/scripts.pory"
	release
# 94 "data/maps/LilycoveCity/scripts.pory"
	end
# 95 "data/maps/LilycoveCity/scripts.pory"

# 96 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 97 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 98 "data/maps/LilycoveCity/scripts.pory"
	release
# 99 "data/maps/LilycoveCity/scripts.pory"
	end
# 100 "data/maps/LilycoveCity/scripts.pory"

# 101 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 102 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 103 "data/maps/LilycoveCity/scripts.pory"
	end
# 104 "data/maps/LilycoveCity/scripts.pory"

# 105 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 106 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 107 "data/maps/LilycoveCity/scripts.pory"
	end
# 108 "data/maps/LilycoveCity/scripts.pory"

# 109 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 110 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 111 "data/maps/LilycoveCity/scripts.pory"
	end
# 112 "data/maps/LilycoveCity/scripts.pory"

# 113 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 114 "data/maps/LilycoveCity/scripts.pory"
	lock
# 115 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 116 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 117 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 118 "data/maps/LilycoveCity/scripts.pory"
	release
# 119 "data/maps/LilycoveCity/scripts.pory"
	end
# 120 "data/maps/LilycoveCity/scripts.pory"

# 121 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 122 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 123 "data/maps/LilycoveCity/scripts.pory"
	release
# 124 "data/maps/LilycoveCity/scripts.pory"
	end
# 125 "data/maps/LilycoveCity/scripts.pory"

# 126 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 127 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 128 "data/maps/LilycoveCity/scripts.pory"
	end
# 129 "data/maps/LilycoveCity/scripts.pory"

# 130 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 131 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 132 "data/maps/LilycoveCity/scripts.pory"
	end
# 133 "data/maps/LilycoveCity/scripts.pory"

# 134 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 135 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 136 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 137 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_MAN_1, Common_Movement_FaceOriginalDirection
# 138 "data/maps/LilycoveCity/scripts.pory"
	end
# 139 "data/maps/LilycoveCity/scripts.pory"

# 140 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 141 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 142 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 143 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_WOMAN_1, Common_Movement_FaceOriginalDirection
# 144 "data/maps/LilycoveCity/scripts.pory"
	end
# 145 "data/maps/LilycoveCity/scripts.pory"

# 146 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 147 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 148 "data/maps/LilycoveCity/scripts.pory"
	end
# 149 "data/maps/LilycoveCity/scripts.pory"

# 150 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 151 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 152 "data/maps/LilycoveCity/scripts.pory"
	end
# 153 "data/maps/LilycoveCity/scripts.pory"

# 154 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 155 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 156 "data/maps/LilycoveCity/scripts.pory"
	end
# 157 "data/maps/LilycoveCity/scripts.pory"

# 158 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 159 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 160 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 161 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 162 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 163 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 164 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 165 "data/maps/LilycoveCity/scripts.pory"
	end
# 166 "data/maps/LilycoveCity/scripts.pory"

# 167 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 168 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 169 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 170 "data/maps/LilycoveCity/scripts.pory"
	end
# 171 "data/maps/LilycoveCity/scripts.pory"

# 172 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 173 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 174 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 175 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 176 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 177 "data/maps/LilycoveCity/scripts.pory"
	end
# 178 "data/maps/LilycoveCity/scripts.pory"

# 179 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 180 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 181 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 182 "data/maps/LilycoveCity/scripts.pory"
	end
# 183 "data/maps/LilycoveCity/scripts.pory"

# 184 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 185 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 186 "data/maps/LilycoveCity/scripts.pory"
	end
# 187 "data/maps/LilycoveCity/scripts.pory"

# 188 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 189 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 190 "data/maps/LilycoveCity/scripts.pory"
	end
# 191 "data/maps/LilycoveCity/scripts.pory"

# 192 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 193 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 194 "data/maps/LilycoveCity/scripts.pory"
	end
# 195 "data/maps/LilycoveCity/scripts.pory"

# 196 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 197 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 198 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 199 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 200 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 201 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 202 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 204 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 206 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 207 "data/maps/LilycoveCity/scripts.pory"
	end
# 208 "data/maps/LilycoveCity/scripts.pory"

# 209 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 210 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 211 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 212 "data/maps/LilycoveCity/scripts.pory"
	end
# 213 "data/maps/LilycoveCity/scripts.pory"

# 214 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 215 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 216 "data/maps/LilycoveCity/scripts.pory"
	end
# 217 "data/maps/LilycoveCity/scripts.pory"

# 218 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 219 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 220 "data/maps/LilycoveCity/scripts.pory"
	end
# 221 "data/maps/LilycoveCity/scripts.pory"

# 222 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 223 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 224 "data/maps/LilycoveCity/scripts.pory"
	end
# 225 "data/maps/LilycoveCity/scripts.pory"

# 226 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 227 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 228 "data/maps/LilycoveCity/scripts.pory"
	end
# 229 "data/maps/LilycoveCity/scripts.pory"

# 230 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 231 "data/maps/LilycoveCity/scripts.pory"
	lock
# 232 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 233 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 234 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 235 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 236 "data/maps/LilycoveCity/scripts.pory"
	end
# 237 "data/maps/LilycoveCity/scripts.pory"

# 238 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 239 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 240 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 241 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 242 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 243 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 244 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 245 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 246 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 247 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 248 "data/maps/LilycoveCity/scripts.pory"
	end
# 249 "data/maps/LilycoveCity/scripts.pory"

# 250 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 251 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 252 "data/maps/LilycoveCity/scripts.pory"
	return
# 253 "data/maps/LilycoveCity/scripts.pory"

# 254 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 255 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 256 "data/maps/LilycoveCity/scripts.pory"
	return
# 257 "data/maps/LilycoveCity/scripts.pory"

# 258 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 259 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 260 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 261 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 262 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 263 "data/maps/LilycoveCity/scripts.pory"
	release
# 264 "data/maps/LilycoveCity/scripts.pory"
	end
# 265 "data/maps/LilycoveCity/scripts.pory"

# 266 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 267 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 268 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 269 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 270 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 271 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 272 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 273 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 274 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 275 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 276 "data/maps/LilycoveCity/scripts.pory"
	end
# 277 "data/maps/LilycoveCity/scripts.pory"

# 278 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 279 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 280 "data/maps/LilycoveCity/scripts.pory"
	return
# 281 "data/maps/LilycoveCity/scripts.pory"

# 282 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 283 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 284 "data/maps/LilycoveCity/scripts.pory"
	return
# 285 "data/maps/LilycoveCity/scripts.pory"

# 286 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 287 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 288 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 289 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 290 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 291 "data/maps/LilycoveCity/scripts.pory"
	release
# 292 "data/maps/LilycoveCity/scripts.pory"
	end
# 293 "data/maps/LilycoveCity/scripts.pory"

# 294 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 295 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 296 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 297 "data/maps/LilycoveCity/scripts.pory"
	end
# 298 "data/maps/LilycoveCity/scripts.pory"

# 299 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 300 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 301 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 302 "data/maps/LilycoveCity/scripts.pory"
	end
# 303 "data/maps/LilycoveCity/scripts.pory"

# 304 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 305 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 306 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 307 "data/maps/LilycoveCity/scripts.pory"
	end
# 308 "data/maps/LilycoveCity/scripts.pory"

# 309 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 310 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 311 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 312 "data/maps/LilycoveCity/scripts.pory"
	end
# 313 "data/maps/LilycoveCity/scripts.pory"

# 314 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 315 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 316 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 317 "data/maps/LilycoveCity/scripts.pory"
	end
# 318 "data/maps/LilycoveCity/scripts.pory"

# 319 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 320 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 321 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 322 "data/maps/LilycoveCity/scripts.pory"
	end
# 323 "data/maps/LilycoveCity/scripts.pory"

# 324 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 325 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 326 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 327 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 328 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 329 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 330 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 331 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 332 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 333 "data/maps/LilycoveCity/scripts.pory"
	end
# 334 "data/maps/LilycoveCity/scripts.pory"

# 335 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 336 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 337 "data/maps/LilycoveCity/scripts.pory"
	return
# 338 "data/maps/LilycoveCity/scripts.pory"

# 339 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 340 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 341 "data/maps/LilycoveCity/scripts.pory"
	return
# 342 "data/maps/LilycoveCity/scripts.pory"

# 343 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 344 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 345 "data/maps/LilycoveCity/scripts.pory"
	return
# 346 "data/maps/LilycoveCity/scripts.pory"

# 347 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 348 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 349 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 350 "data/maps/LilycoveCity/scripts.pory"
	return
# 351 "data/maps/LilycoveCity/scripts.pory"

# 352 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 353 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 354 "data/maps/LilycoveCity/scripts.pory"
	return
# 355 "data/maps/LilycoveCity/scripts.pory"

# 356 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 357 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 358 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 359 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 360 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 361 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 362 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 363 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 364 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 365 "data/maps/LilycoveCity/scripts.pory"
	end
# 366 "data/maps/LilycoveCity/scripts.pory"

# 367 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 368 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 369 "data/maps/LilycoveCity/scripts.pory"
	return
# 370 "data/maps/LilycoveCity/scripts.pory"

# 371 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 372 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 373 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 374 "data/maps/LilycoveCity/scripts.pory"
	return
# 375 "data/maps/LilycoveCity/scripts.pory"

# 376 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 377 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 378 "data/maps/LilycoveCity/scripts.pory"
	return
# 379 "data/maps/LilycoveCity/scripts.pory"

# 380 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 381 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 382 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 383 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 384 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 385 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 386 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 387 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 388 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 389 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 390 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 391 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 392 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 393 "data/maps/LilycoveCity/scripts.pory"
	release
# 394 "data/maps/LilycoveCity/scripts.pory"
	end
# 395 "data/maps/LilycoveCity/scripts.pory"

# 396 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 397 "data/maps/LilycoveCity/scripts.pory"
	lock
# 398 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 399 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 400 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 401 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 402 "data/maps/LilycoveCity/scripts.pory"
	release
# 403 "data/maps/LilycoveCity/scripts.pory"
	end
# 404 "data/maps/LilycoveCity/scripts.pory"

# 405 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 406 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 407 "data/maps/LilycoveCity/scripts.pory"
	return
# 408 "data/maps/LilycoveCity/scripts.pory"

# 409 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 410 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 411 "data/maps/LilycoveCity/scripts.pory"
	return
# 412 "data/maps/LilycoveCity/scripts.pory"

# 413 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 414 "data/maps/LilycoveCity/scripts.pory"
	.string "AURA: ¡Mira por donde!\n"
# 415 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, ¿también estás de compras?\p"
# 416 "data/maps/LilycoveCity/scripts.pory"
	.string "He comprado un montón de MUÑECOS\n"
# 417 "data/maps/LilycoveCity/scripts.pory"
	.string "y PÓSTERS.\p"
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "Y por supuesto también he atrapado\n"
# 419 "data/maps/LilycoveCity/scripts.pory"
	.string "un montón de POKéMON y los estoy\l"
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "entrenando como se debe hacer.\p"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "De hecho, me preocupa pensar que igual\n"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "tú no entrenas los tuyos como debes…\p"
# 423 "data/maps/LilycoveCity/scripts.pory"
	.string "Voy a luchar contigo para que puedas\n"
# 424 "data/maps/LilycoveCity/scripts.pory"
	.string "mostrarme tus POKéMON, {PLAYER}{KUN}.$"
# 425 "data/maps/LilycoveCity/scripts.pory"

# 426 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "AURA: ¡Pero bueno! {PLAYER}{KUN}, ¿acaso\n"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "no has estado entrenando tus POKéMON?\p"
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "Pues todo ENTRENADOR que se precie\n"
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "debería hacerlo…$"
# 431 "data/maps/LilycoveCity/scripts.pory"

# 432 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "AURA: Venga, lucha conmigo, que quiero\n"
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "ver cómo entrenas tus POKéMON…$"
# 435 "data/maps/LilycoveCity/scripts.pory"

# 436 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "AURA: Los POKéMON que he entrenado\n"
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "dan mil vueltas a los tuyos, {PLAYER}{KUN}.$"
# 439 "data/maps/LilycoveCity/scripts.pory"

# 440 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 441 "data/maps/LilycoveCity/scripts.pory"
	.string "Ejem…\p"
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "Recuerdo el combate que tuve contigo,\n"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, en la RUTA 103.\p"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "¿A que ese combate te ayudó\n"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "a ser así de fuerte, {PLAYER}{KUN}?$"
# 446 "data/maps/LilycoveCity/scripts.pory"

# 447 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "AURA: Creo que voy a volver pronto\n"
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "a VILLA RAÍZ.\p"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "He atrapado un buen grupo de POKéMON\n"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "y mi POKéDEX está bastante completa.\l"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "Quiero enseñar todo esto a mis padres.$"
# 453 "data/maps/LilycoveCity/scripts.pory"

# 454 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, ¿qué vas a hacer?\p"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Conseguir todas las MEDALLAS\n"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "de GIMNASIO e ir a la LIGA POKéMON?\p"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "Bueno, mientras tú ganas MEDALLAS,\n"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "yo voy a trabajar en mi POKéDEX.\l"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "¡La voy a completar antes que tú!\p"
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Nos vemos!$"
# 462 "data/maps/LilycoveCity/scripts.pory"

# 463 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, ¿qué vas a hacer?\p"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Conseguir todas las MEDALLAS\n"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "de GIMNASIO e ir a la LIGA POKéMON?\p"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "¿O vas a completar tu POKéDEX?\p"
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "Puede que haya perdido luchando contra\n"
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "ti, ¡pero la voy a llenar antes que tú!\p"
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Nos vemos!$"
# 471 "data/maps/LilycoveCity/scripts.pory"

# 472 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, ¿qué vas a hacer?\p"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Vas a aceptar el desafío\n"
# 475 "data/maps/LilycoveCity/scripts.pory"
	.string "del FRENTE de BATALLA?\p"
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "¿O vas a completar tu POKéDEX?\p"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "Puede que haya perdido luchando contra\n"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "ti, ¡pero la voy a llenar antes que tú!\p"
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Nos vemos!$"
# 480 "data/maps/LilycoveCity/scripts.pory"

# 481 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "BRUNO: Eh, hola, {PLAYER}.\p"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "Le estoy haciendo un recado a mi\n"
# 484 "data/maps/LilycoveCity/scripts.pory"
	.string "padre, no estoy comprando MUÑECOS.\p"
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "Pero ya llevo mucho tiempo dando\n"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "vueltas…\p"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Qué te parece si combatimos para ver\n"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "quién entrena POKéMON mejor?$"
# 489 "data/maps/LilycoveCity/scripts.pory"

# 490 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "BRUNO: ¿Qué te pasa?\n"
# 492 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Sabes que vas a perder?$"
# 493 "data/maps/LilycoveCity/scripts.pory"

# 494 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "BRUNO: ¿Quieres luchar para ver\n"
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "quién entrena POKéMON mejor?$"
# 497 "data/maps/LilycoveCity/scripts.pory"

# 498 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "BRUNO: Je, je, que sepas que no\n"
# 500 "data/maps/LilycoveCity/scripts.pory"
	.string "tengo intención de perder.$"
# 501 "data/maps/LilycoveCity/scripts.pory"

# 502 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "Sí, sí…\n"
# 504 "data/maps/LilycoveCity/scripts.pory"
	.string "Has mejorado mucho.\p"
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "Qué rollo… Yo antes te llevaba ventaja\n"
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "entrenando POKéMON…$"
# 507 "data/maps/LilycoveCity/scripts.pory"

# 508 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "BRUNO: Bueno…\n"
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "Tengo pensado volver a VILLA RAÍZ.\p"
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "Sabes que estoy ayudando a mi padre\n"
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "a completar su POKéDEX. Ya está\l"
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "casi llena y quiero enseñársela.$"
# 514 "data/maps/LilycoveCity/scripts.pory"

# 515 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, ¿qué vas a hacer?\p"
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Conseguir todas las MEDALLAS\n"
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "de GIMNASIO e ir a la LIGA POKéMON?\p"
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "Puede que yo haga lo mismo…\p"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "Bueno, da igual. ¡Tú, persevera!$"
# 521 "data/maps/LilycoveCity/scripts.pory"

# 522 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, ¿qué vas a hacer?\p"
# 524 "data/maps/LilycoveCity/scripts.pory"
	.string "Ya que eres tan fuerte, ¿vas a aceptar\n"
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "el desafío de la LIGA POKéMON?\p"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "Pero que conste: si entreno un poco\n"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "más a mis POKéMON, seré más fuerte\l"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "que tú, {PLAYER}.\p"
# 529 "data/maps/LilycoveCity/scripts.pory"
	.string "Bueno, da igual. ¡Tú, persevera!$"
# 530 "data/maps/LilycoveCity/scripts.pory"

# 531 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, ¿qué vas a hacer?\p"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Vas a aceptar el desafío\n"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "del FRENTE de BATALLA?\p"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "¿O vas a completar tu POKéDEX?\p"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "Ya que eres tan fuerte, deberías\n"
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "pasarte por el FRENTE de BATALLA.\p"
# 538 "data/maps/LilycoveCity/scripts.pory"
	.string "Pero que conste: si entreno algo más a\n"
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "mis POKéMON, seré mejor que tú, {PLAYER}.\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "De hecho, quizás debería ir al\n"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "FRENTE de BATALLA.\p"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "Bueno, da igual. ¡Tú, aguanta!$"
# 543 "data/maps/LilycoveCity/scripts.pory"

# 544 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "Jua, jua, jua…\p"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "Hoy hemos llevado más botín\n"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "a nuestra GUARIDA secreta…\p"
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "¡¿Qui-quién eres tú?!\n"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Yo no he dicho nada!$"
# 550 "data/maps/LilycoveCity/scripts.pory"

# 551 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "Soy sólo un SOLDADO, así que no sé\n"
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "nada de los planes del JEFE…\p"
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Pero, siendo parte del EQUIPO AQUA,\n"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "sé que vamos a hacer grandes cosas!\p"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "¡¿Qui-quién eres tú?!\n"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Yo no he dicho nada!$"
# 558 "data/maps/LilycoveCity/scripts.pory"

# 559 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Eh, tú!\p"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Ni se te ocurra acercarte a la cueva\n"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "que hay en la ensenada!\p"
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Por qué? ¡Porque lo digo yo!\n"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Soy mayor que tú, así que obedece!$"
# 565 "data/maps/LilycoveCity/scripts.pory"

# 566 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 567 "data/maps/LilycoveCity/scripts.pory"
	.string "Si los del EQUIPO AQUA nos apoderamos\n"
# 568 "data/maps/LilycoveCity/scripts.pory"
	.string "del mundo entero, será un lugar mejor\l"
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "para todos, POKéMON incluidos.$"
# 570 "data/maps/LilycoveCity/scripts.pory"

# 571 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Eh! ¡WAILMER!\n"
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Salid del agua ahora mismo!$"
# 574 "data/maps/LilycoveCity/scripts.pory"

# 575 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 576 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Mmm? ¿Qué quieres?\p"
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "Estás fastidiando el entrenamiento,\n"
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "así que ¿por qué no te pierdes?$"
# 579 "data/maps/LilycoveCity/scripts.pory"

# 580 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "Hay una SALA de CONCURSOS\n"
# 582 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON en esta misma ciudad.\p"
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "Eso quiere decir que POKéMON fabulosos\n"
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "llegan desde cada rincón de la región.\p"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Estoy deseando verlos en acción!$"
# 586 "data/maps/LilycoveCity/scripts.pory"

# 587 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 588 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Has visto esa extraña cueva que hay\n"
# 589 "data/maps/LilycoveCity/scripts.pory"
	.string "en la ensenada, al otro lado del pueblo?$"
# 590 "data/maps/LilycoveCity/scripts.pory"

# 591 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 592 "data/maps/LilycoveCity/scripts.pory"
	.string "Voy a enseñar a mi POKéMON algún\n"
# 593 "data/maps/LilycoveCity/scripts.pory"
	.string "movimiento nuevo para que participe\l"
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "en algún CONCURSO.\p"
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "Para eso tengo que visitar al QUITA-\n"
# 596 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVIMIENTOS y hacerle olvidar algún\l"
# 597 "data/maps/LilycoveCity/scripts.pory"
	.string "movimiento de MO.$"
# 598 "data/maps/LilycoveCity/scripts.pory"

# 599 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "Vengo desde KANTO.\p"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "Me parece que HOENN, con tanta agua\n"
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "y tanto verde, es realmente precioso.\p"
# 603 "data/maps/LilycoveCity/scripts.pory"
	.string "Pero una duda me corroe…\p"
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Es posible que haya POKéMON raros\n"
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "que sólo vivan aquí?$"
# 606 "data/maps/LilycoveCity/scripts.pory"

# 607 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "El EQUIPO AQUA ha estado entrenando\n"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "sus WAILMER en la ensenada.\p"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "Y, como están en medio, no nos dejan\n"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "a nosotros, los MARINEROS, sacar\l"
# 612 "data/maps/LilycoveCity/scripts.pory"
	.string "nuestras barcas al mar…$"
# 613 "data/maps/LilycoveCity/scripts.pory"

# 614 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Te has enterado?\p"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Alguien ha dado su merecido\n"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "al EQUIPO AQUA por nosotros!\p"
# 618 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Los WAILMER han salido de la\n"
# 619 "data/maps/LilycoveCity/scripts.pory"
	.string "ensenada y por fin podemos\l"
# 620 "data/maps/LilycoveCity/scripts.pory"
	.string "sacar nuestras barcas tranquilos!$"
# 621 "data/maps/LilycoveCity/scripts.pory"

# 622 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "Estaba echándome una siestecita\n"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "en la posada de la costa, arrullada\l"
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "por el sonido de las olas…\p"
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "¡cuando alguien robó mi POKéMON!\p"
# 627 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Quién ha sido, quién?\n"
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "¿El EQUIPO AQUA? ¿Serán ellos?$"
# 629 "data/maps/LilycoveCity/scripts.pory"

# 630 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "Mi pobre POKéMON desaparecido…\n"
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "Volvió solito cuando no lo esperaba.$"
# 633 "data/maps/LilycoveCity/scripts.pory"

# 634 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "Soy un MARCHANTE de ARTE.\p"
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "Compro y vendo arte del bueno,\n"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "sobre todo cuadros.\p"
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "Me han dicho que el MUSEO de aquí\n"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "expone unas obras magníficas…$"
# 640 "data/maps/LilycoveCity/scripts.pory"

# 641 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "Nosotros envejecemos y nos arrugamos,\n"
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "pero el mar continúa joven y bravío,\l"
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "lleno de vida, por siempre…\p"
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "Qué pensamiento tan profundo, ¿eh?$"
# 646 "data/maps/LilycoveCity/scripts.pory"

# 647 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "Hace sesenta años que mi marido se me\n"
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "declaró aquí… El mar sigue tan hermoso\l"
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "como en aquel entonces…\p"
# 651 "data/maps/LilycoveCity/scripts.pory"
	.string "Ay, que me emociono…$"
# 652 "data/maps/LilycoveCity/scripts.pory"

# 653 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "Dime, ¿has oído hablar de esa gruta\n"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "que hay en la ensenada?\p"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "Se ha creado de forma natural,\n"
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "pero el dichoso EQUIPO AQUA llegó\l"
# 658 "data/maps/LilycoveCity/scripts.pory"
	.string "y tuvo que hacer reformas, claro.\p"
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Y se atreven a llamarse el “equipo\n"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "amante de la naturaleza”!\p"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "Lo que dicen no tiene nada que ver\n"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "con lo que hacen en realidad…$"
# 663 "data/maps/LilycoveCity/scripts.pory"

# 664 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "Esa cueva en la ensenada…\p"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "No me di cuenta enseguida, pero\n"
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "se ve que está completamente vacía.\p"
# 668 "data/maps/LilycoveCity/scripts.pory"
	.string "Los del EQUIPO AQUA deben de\n"
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "haberse largado. Ya era hora…$"
# 670 "data/maps/LilycoveCity/scripts.pory"

# 671 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "CIUDAD CALAGUA\p"
# 673 "data/maps/LilycoveCity/scripts.pory"
	.string "“Allí donde acaba la tierra\n"
# 674 "data/maps/LilycoveCity/scripts.pory"
	.string "y empieza el mar.”$"
# 675 "data/maps/LilycoveCity/scripts.pory"

# 676 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "SALA de CONCURSOS POKéMON\p"
# 678 "data/maps/LilycoveCity/scripts.pory"
	.string "“¡Un punto de encuentro para\n"
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "grandes ENTRENADORES!”$"
# 680 "data/maps/LilycoveCity/scripts.pory"

# 681 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 682 "data/maps/LilycoveCity/scripts.pory"
	.string "MOTEL AGUACALA\p"
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "“¡El único lugar de CALAGUA\n"
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "donde el agua no cala!”$"
# 685 "data/maps/LilycoveCity/scripts.pory"

# 686 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 687 "data/maps/LilycoveCity/scripts.pory"
	.string "MUSEO de CALAGUA\p"
# 688 "data/maps/LilycoveCity/scripts.pory"
	.string "“Contempla la magnífica exposición\n"
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "de obras de arte POKéMON.”$"
# 690 "data/maps/LilycoveCity/scripts.pory"

# 691 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 692 "data/maps/LilycoveCity/scripts.pory"
	.string "MUSEO de CALAGUA\p"
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "“Contempla la magnífica exposición\n"
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "de obras de arte POKéMON de {PLAYER}.”$"
# 695 "data/maps/LilycoveCity/scripts.pory"

# 696 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "PUERTO de CIUDAD CALAGUA\p"
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "“El ferry S.S. MAREA está siendo\n"
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "construido en CIUDAD PORTUAL.\p"
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "Se espera que el servicio entre\n"
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "en funcionamiento en breve.”$"
# 702 "data/maps/LilycoveCity/scripts.pory"

# 703 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 704 "data/maps/LilycoveCity/scripts.pory"
	.string "PUERTO de CIUDAD CALAGUA\p"
# 705 "data/maps/LilycoveCity/scripts.pory"
	.string "“Disfruta de un agradable crucero\n"
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "a bordo del ferry S.S. MAREA.”$"
# 707 "data/maps/LilycoveCity/scripts.pory"

# 708 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 709 "data/maps/LilycoveCity/scripts.pory"
	.string "CLUB de FANS de ENTRENADORES POKéMON\p"
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "En el cartel hay garabateados un\n"
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "montón de nombres de ENTRENADORES…$"
# 712 "data/maps/LilycoveCity/scripts.pory"

# 713 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "CENTRO COMERCIAL de CALAGUA\p"
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "“¡Un lugar donde comprar\n"
# 716 "data/maps/LilycoveCity/scripts.pory"
	.string "y divertirse hasta la saciedad!\p"
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "Busques lo que busques…,\n"
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "¡lo encontrarás aquí!”$"
# 719 "data/maps/LilycoveCity/scripts.pory"

# 720 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 721 "data/maps/LilycoveCity/scripts.pory"
	.string "CASA del QUITA-MOVIMIENTOS\p"
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "“Si no te gusta un movimiento\n"
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, ¡bórralo!”$"
# 724 "data/maps/LilycoveCity/scripts.pory"

# 725 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 726 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Sabes algo de la LICUABAYAS?$"
# 727 "data/maps/LilycoveCity/scripts.pory"

# 728 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 729 "data/maps/LilycoveCity/scripts.pory"
	.string "La gente tiene que trabajar en equipo\n"
# 730 "data/maps/LilycoveCity/scripts.pory"
	.string "para hacer que gire más rápido.\p"
# 731 "data/maps/LilycoveCity/scripts.pory"
	.string "Cuanto más rápido gira, mejor salen\n"
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "los {POKEBLOCK}S. Eso dicen.$"
# 733 "data/maps/LilycoveCity/scripts.pory"

# 734 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "Se usa para crear una especie\n"
# 736 "data/maps/LilycoveCity/scripts.pory"
	.string "de caramelo que se llama {POKEBLOCK}.\p"
# 737 "data/maps/LilycoveCity/scripts.pory"
	.string "Si le das un buen {POKEBLOCK} a un POKéMON,\n"
# 738 "data/maps/LilycoveCity/scripts.pory"
	.string "éste mejorará un montón.$"
# 739 "data/maps/LilycoveCity/scripts.pory"

# 740 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 741 "data/maps/LilycoveCity/scripts.pory"
	.string "He oído que hay una torre en\n"
# 742 "data/maps/LilycoveCity/scripts.pory"
	.string "alguna de las rutas marítimas.\p"
# 743 "data/maps/LilycoveCity/scripts.pory"
	.string "Creo que se llama PILAR CELESTE.$"
# 744 "data/maps/LilycoveCity/scripts.pory"

# 745 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 746 "data/maps/LilycoveCity/scripts.pory"
	.string "Vi una torre muy alta en algún\n"
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "punto de la RUTA 131.\p"
# 748 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Podría tratarse de…?$"
# 749 "data/maps/LilycoveCity/scripts.pory"

# 750 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 751 "data/maps/LilycoveCity/scripts.pory"
	.string "Acabamos de llegar y estamos\n"
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "de luna de miel.\p"
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "Y justo hemos visto un POKéMON\n"
# 754 "data/maps/LilycoveCity/scripts.pory"
	.string "de tipo DRAGÓN volando en el cielo.\p"
# 755 "data/maps/LilycoveCity/scripts.pory"
	.string "¿Hay muchos POKéMON de ese tipo\n"
# 756 "data/maps/LilycoveCity/scripts.pory"
	.string "en la región de HOENN?$"
# 757 "data/maps/LilycoveCity/scripts.pory"

# 758 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 759 "data/maps/LilycoveCity/scripts.pory"
	.string "Durante nuestra luna de miel,\n"
# 760 "data/maps/LilycoveCity/scripts.pory"
	.string "intentamos ver tantos POKéMON\l"
# 761 "data/maps/LilycoveCity/scripts.pory"
	.string "raros como fuera posible.\p"
# 762 "data/maps/LilycoveCity/scripts.pory"
	.string "Por eso nos alegró tanto ver a ese\n"
# 763 "data/maps/LilycoveCity/scripts.pory"
	.string "extraño POKéMON nada más llegar.\p"
# 764 "data/maps/LilycoveCity/scripts.pory"
	.string "¡Ha sido muy emocionante!$"
