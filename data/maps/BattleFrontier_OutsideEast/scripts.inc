# 1 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_MapScripts::
# 3 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_OnResume
# 4 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition
# 5 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 7 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnResume:
# 8 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo
# 9 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 10 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 11 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo::
# 12 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 16 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 17 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnTransition:
# 18 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 19 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 20 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_ShowSudowoodo
# 21 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 23 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ShowSudowoodo::
# 24 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
# 25 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 26 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 27 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleTowerSign::
# 28 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign, MSGBOX_SIGN
# 29 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 31 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePalaceSign::
# 32 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePalaceSign, MSGBOX_SIGN
# 33 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 35 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleArenaSign::
# 36 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleArenaSign, MSGBOX_SIGN
# 37 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 39 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePyramidSign::
# 40 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePyramidSign, MSGBOX_SIGN
# 41 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 43 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_NinjaBoy::
# 44 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial, MSGBOX_NPC
# 45 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 46 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 47 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man1::
# 48 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier, MSGBOX_NPC
# 49 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 51 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Hiker::
# 52 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PyramidTooHarsh, MSGBOX_NPC
# 53 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 55 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_HexManiac::
# 56 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ThriveInDarkness, MSGBOX_NPC
# 57 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 59 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt1::
# 60 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam, MSGBOX_NPC
# 61 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 62 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 63 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Cook::
# 64 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 65 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BelieveInYouBuddy, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 67 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 69 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Zigzagoon::
# 70 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 71 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 72 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 73 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 74 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant, MSGBOX_DEFAULT
# 75 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 76 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 77 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 78 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 79 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RichBoy::
# 80 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody, MSGBOX_NPC
# 81 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 82 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 83 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExpertF::
# 84 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceBeatGymLeader, MSGBOX_NPC
# 85 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 87 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteF::
# 88 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles, MSGBOX_NPC
# 89 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 90 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 91 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Twin::
# 92 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon, MSGBOX_NPC
# 93 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 94 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 95 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man2::
# 96 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 97 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 99 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 100 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 101 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteM::
# 102 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_DidScottBringYouHere, MSGBOX_NPC
# 103 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 104 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 105 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Sudowoodo::
# 106 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 107 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 108 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 109 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 110 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 111 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 112 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 113 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 114 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 115 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo::
# 116 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 117 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 118 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	special DoWateringBerryTreeAnim
# 119 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitstate
# 120 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 121 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 122 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 123 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 124 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
# 125 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	closemessage
# 126 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 127 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 128 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay 40
# 129 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 130 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FRONTIER_SUDOWOODO
# 131 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 40
# 132 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 133 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	dowildbattle
# 134 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 135 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 136 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 137 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 138 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 139 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 140 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 141 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 142 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 143 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo::
# 144 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 145 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 146 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 147 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 148 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Movement_SudowoodoShake:
# 149 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 150 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 151 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 152 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 153 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 154 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 155 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 156 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 157 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 158 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 159 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 160 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 161 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 162 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 163 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 164 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	step_end
# 165 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 166 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac1::
# 167 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena, MSGBOX_NPC
# 168 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 169 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 170 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Girl::
# 171 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere, MSGBOX_NPC
# 172 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 173 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 174 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_PsychicM::
# 175 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid, MSGBOX_NPC
# 176 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 177 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 178 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man3::
# 179 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GotWipedOut, MSGBOX_NPC
# 180 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 181 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 182 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman1::
# 183 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower, MSGBOX_NPC
# 184 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 185 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 186 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman2::
# 187 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll, MSGBOX_NPC
# 188 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 189 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 190 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt2::
# 191 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere, MSGBOX_NPC
# 192 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 194 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac2::
# 195 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 196 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 198 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 199 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 200 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman3::
# 201 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 202 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome, MSGBOX_DEFAULT
# 203 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 204 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 205 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 206 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RankingHallSign::
# 207 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_RankingHallSign, MSGBOX_SIGN
# 208 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 209 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 210 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExchangeCornerSign::
# 211 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ExchangeCornerSign, MSGBOX_SIGN
# 212 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 213 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 214 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Gentleman::
# 215 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers, MSGBOX_NPC
# 216 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 217 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 218 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWoman::
# 219 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 220 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 221 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
# 222 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
# 223 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 224 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 225 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 226 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone::
# 227 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
# 228 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 229 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 230 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 231 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Camper::
# 232 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_StickyMonWithLongTail, MSGBOX_NPC
# 233 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 235 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerSign:
# 236 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Ésta es la TORRE BATALLA!\n"
# 237 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Nada como una buena racha\l"
# 238 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "para demostrar lo que vales!$"
# 239 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 240 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePalaceSign:
# 241 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Éste es el PALACIO BATALLA!\n"
# 242 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡No pierdas de vista a tus POKéMON!$"
# 243 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 244 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleArenaSign:
# 245 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Éste es el DOJO BATALLA!\n"
# 246 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Hazte con un buen equipo!$"
# 247 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 248 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePyramidSign:
# 249 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Ésta es la PIRÁMIDE BATALLA!\n"
# 250 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Te espera la EXPEDICIÓN de COMBATES!$"
# 251 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 252 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_RankingHallSign:
# 253 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡HALL de las CLASIFICACIONES!\n"
# 254 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Apúntate los mejores récords!$"
# 255 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 256 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ExchangeCornerSign:
# 257 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "CENTRO del SERVICIO de CANJE\n"
# 258 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Canjea tus PUNTOS de BATALLA!$"
# 259 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 260 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial:
# 261 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Guau!\n"
# 262 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Es gigantesca!\p"
# 263 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Sólo con ver la TORRE BATALLA,\n"
# 264 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "uno sabe que es un lugar especial.$"
# 265 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 266 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier:
# 267 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Mi gran sueño es conquistar el FRENTE\n"
# 268 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "de BATALLA y la LIGA POKéMON!\p"
# 269 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Y, si consigo hacerlo realidad…,\p"
# 270 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "le preguntaré a MIMI, mi vecina,\n"
# 271 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "si quiere que seamos amigos.$"
# 272 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 273 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PyramidTooHarsh:
# 274 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡La PIRÁMIDE BATALLA es muy dura!\n"
# 275 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Nunca podré llegar arriba del todo!\p"
# 276 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Aunque siempre puedo tratar de llegar\n"
# 277 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "escalando por fuera…$"
# 278 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 279 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ThriveInDarkness:
# 280 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Me crezco en las tinieblas…\n"
# 281 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Sí… ¿Hay algo que sea digno de mí?\l"
# 282 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Nada, salvo la PIRÁMIDE BATALLA…\p"
# 283 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¿Acaso hay algo mejor que perderse\n"
# 284 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "entre las tinieblas y la desesperación?$"
# 285 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 286 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam:
# 287 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "No he dormido nada esta semana,\n"
# 288 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡pero ya tengo el equipo invencible!\p"
# 289 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Voy a hacer historia\n"
# 290 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "en el DOJO BATALLA!$"
# 291 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 292 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_DidScottBringYouHere:
# 293 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¿Te ha traído a ti también el tal TRETO?\n"
# 294 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Qué tipo más raro, ¿no te parece?\p"
# 295 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Es como si supiese de verdad elegir\n"
# 296 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "a los mejores ENTRENADORES, pero…\p"
# 297 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Nunca lo he visto combatir por sí mismo.$"
# 298 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 299 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BelieveInYouBuddy:
# 300 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡ZIGG!\n"
# 301 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Confío en ti, chiquitín!\p"
# 302 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Y mi pequeño ZIGG tendrá la gominola\n"
# 303 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "que más le guste si gana!$"
# 304 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 305 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant:
# 306 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ZIGZAGOON parece perdido…$"
# 307 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 308 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody:
# 309 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "La gente dice que soy un metomentodo,\n"
# 310 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "pero es que no puedo evitarlo…\p"
# 311 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Tienes la gorra torcida!\n"
# 312 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Mira qué de basura hay en el suelo!\l"
# 313 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Huy, es hora de cenar!\p"
# 314 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "No sé si podré soportar quedarme\n"
# 315 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "sólo mirando el PALACIO BATALLA…$"
# 316 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 317 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceBeatGymLeader:
# 318 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Aunque no lo parezca ahora, en mi época\n"
# 319 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "llegué a ganar a un LÍDER de GIMNASIO.\p"
# 320 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Quién sabe, si me lo propusiera, quizás\n"
# 321 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "podría volver a saborear la gloria.$"
# 322 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 323 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles:
# 324 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Soy el más rápido con mi BICI.\n"
# 325 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Igualito que cuando combato!\p"
# 326 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡He ganado algunos combates\n"
# 327 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "en menos que canta un gallo!$"
# 328 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 329 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon:
# 330 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Soy mucho mejor que mi padre\n"
# 331 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "entrenando POKéMON.$"
# 332 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 333 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy:
# 334 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Venga, hija mía!\n"
# 335 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Vete y gana unos combates por papá!\p"
# 336 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Eres igualita a tu madre,\n"
# 337 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡contigo no va a poder nadie!$"
# 338 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 339 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena:
# 340 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "No ha sido fácil llegar hasta aquí,\n"
# 341 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "pero había oído que había una belleza\l"
# 342 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "despampanante en el DOJO BATALLA.\p"
# 343 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¿Y sabes lo que me he encontrado\n"
# 344 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "en realidad?\p"
# 345 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Una banda de “artistas marciales”\n"
# 346 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "sudados, malolientes y salvajes!$"
# 347 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 348 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere:
# 349 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "A veces veo entrar ahí a un anciano\n"
# 350 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "que tiene pinta de ser muy importante.\p"
# 351 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Menudos POKéMON que lleva!…\p"
# 352 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Pero, a pesar de todo, parece\n"
# 353 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ser un tipo agradable.$"
# 354 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 355 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid:
# 356 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¿La conoces? ¿Conoces la leyenda\n"
# 357 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "de la PIRÁMIDE BATALLA?\p"
# 358 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Cuando un ENTRENADOR armado de valor\n"
# 359 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "llegue a la cima dorada, un hombre entre\l"
# 360 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "los hombres saldrá a su encuentro.\p"
# 361 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¿No conocías esta leyenda?…\p"
# 362 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Pues claro que no!\n"
# 363 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Me la acabo de inventar!\p"
# 364 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¿Y qué significa?, me dirás…\p"
# 365 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Bueno, eso, ¡no puedo decírtelo!$"
# 366 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 367 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GotWipedOut:
# 368 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Madre mía!\n"
# 369 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Y yo que no había perdido nunca antes!\p"
# 370 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Pero esta vez me han tratado\n"
# 371 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "sin contemplaciones!\p"
# 372 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Y encima van y me dicen que no\n"
# 373 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "valgo para nada! ¡Madre mía!$"
# 374 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 375 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower:
# 376 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Este pobre se topó con un ENTRENADOR\n"
# 377 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "que lo hizo trizas en la TORRE BATALLA.\p"
# 378 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Mira cómo lo han dejado…\p"
# 379 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "No lo olvides si alguna vez decides\n"
# 380 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "entrar en la TORRE BATALLA.$"
# 381 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 382 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll:
# 383 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Sí! ¡Por fin he conseguido suficientes\n"
# 384 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "PUNTOS de BATALLA!\p"
# 385 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Creo que voy a canjearlos por\n"
# 386 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "un MUÑECO de peluche gigante!$"
# 387 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 388 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere:
# 389 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Guay, sí!\n"
# 390 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡El HALL de las CLASIFICACIONES!\p"
# 391 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Yo quiero pasar a la historia como\n"
# 392 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "un gran campeón y que graben\l"
# 393 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "aquí mi nombre con letras de oro.$"
# 394 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 395 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou:
# 396 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Contigo a mi lado,\n"
# 397 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "la victoria está más que asegurada.$"
# 398 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 399 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome:
# 400 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Ay, pichoncito, eres maravilloso!\p"
# 401 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Estoy deseando empezar a luchar!\p"
# 402 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Venga, vamos corriendo a una de esas\n"
# 403 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "salas de COMBATES MÚLTIPLES!\p"
# 404 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Cuando entremos juntos en el SALÓN\n"
# 405 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "BATALLA, dejaremos a todos atrás\l"
# 406 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "con el poder de nuestro amor.\p"
# 407 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Irán cayendo uno a uno\n"
# 408 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "como piezas de dominó!$"
# 409 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 410 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers:
# 411 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "El FRENTE de BATALLA no es sólo\n"
# 412 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "para ENTRENADORES fuertes.\p"
# 413 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Parece que aquí hay también gente\n"
# 414 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "con habilidades especiales.\p"
# 415 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ese TRETO…\p"
# 416 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Puede que haya construido este lugar\n"
# 417 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "pensando en hacer algo aún más grande…$"
# 418 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 419 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle:
# 420 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Por favor, ¿serías tan amable?\n"
# 421 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¿Tienes buena vista?\p"
# 422 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Por ahí abajo hay un árbol viejo\n"
# 423 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "y, aunque tengo la vista cansada,\l"
# 424 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "para mí que se está meneando…$"
# 425 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 426 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere:
# 427 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Por favor, ¿serías tan amable?\n"
# 428 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¿Tienes buena memoria?\p"
# 429 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Es que tengo la sensación de que ahí\n"
# 430 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "abajo había antes un árbol viejo…$"
# 431 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 432 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_StickyMonWithLongTail:
# 433 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Yo! ¡Yo! ¡Yo!…\n"
# 434 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Lo he visto!\p"
# 435 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Era una especie de POKéMON pegajoso\n"
# 436 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "y con una cola muy larga!\p"
# 437 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "¡Estaba escondido debajo de esa piedra,\n"
# 438 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "y no dejaba de mirarme! ¡Ay, qué repelús!$"
