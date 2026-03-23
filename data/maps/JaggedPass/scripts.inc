JaggedPass_MapScripts::
# 2 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 3 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
	.byte 0

JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_ASH_WEATHER, 1
	goto_if_eq JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/JaggedPass/scripts.pory"
	random 99
# 8 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_le JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 13 "data/maps/JaggedPass/scripts.pory"
	clearflag FLAG_TEMP_1
# 14 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_2
JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/JaggedPass/scripts.pory"
	random 99
# 17 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_le JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 22 "data/maps/JaggedPass/scripts.pory"
	clearflag FLAG_TEMP_3
# 23 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_4
JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	end

JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/JaggedPass/scripts.pory"
	call JaggedPass_EventScript_SetWeatherAsh
	goto JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_1
# 10 "data/maps/JaggedPass/scripts.pory"
	clearflag FLAG_TEMP_2
	goto JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 18 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_3
# 19 "data/maps/JaggedPass/scripts.pory"
	clearflag FLAG_TEMP_4
	goto JaggedPass_MapScripts_MAP_SCRIPT_ON_TRANSITION_8


JaggedPass_EventScript_ShinyAbsol::
# 31 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 32 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_SHINY_FIRST_CHOICE, SPECIES_ABSOL
# 33 "data/maps/JaggedPass/scripts.pory"
	moncryscript SPECIES_ABSOL, JaggedPass_EventScript_ShinyAbsol_Text_0, CRY_MODE_ENCOUNTER
# 34 "data/maps/JaggedPass/scripts.pory"
	setwildbattle SPECIES_ABSOL, 25, ITEM_SITRUS_BERRY
# 35 "data/maps/JaggedPass/scripts.pory"
	dowildbattle
# 36 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 37 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq JaggedPass_EventScript_ShinyAbsol_2
JaggedPass_EventScript_ShinyAbsol_1:
# 41 "data/maps/JaggedPass/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 42 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end

JaggedPass_EventScript_ShinyAbsol_2:
# 38 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_JAGGED_ABSOL_SHINY
# 39 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_2
	goto JaggedPass_EventScript_ShinyAbsol_1


JaggedPass_EventScript_Absol::
# 47 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_NO_SHINIES
# 48 "data/maps/JaggedPass/scripts.pory"
	moncryscript SPECIES_ABSOL, JaggedPass_EventScript_Absol_Text_0, CRY_MODE_ENCOUNTER
# 49 "data/maps/JaggedPass/scripts.pory"
	setwildbattle SPECIES_ABSOL, 25, ITEM_SITRUS_BERRY
# 50 "data/maps/JaggedPass/scripts.pory"
	dowildbattle
# 51 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 52 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq JaggedPass_EventScript_Absol_2
JaggedPass_EventScript_Absol_1:
# 56 "data/maps/JaggedPass/scripts.pory"
	clearflag FLAG_NO_SHINIES
# 57 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end

JaggedPass_EventScript_Absol_2:
# 53 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_JAGGED_ABSOL
# 54 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_1
	goto JaggedPass_EventScript_Absol_1


JaggedPass_EventScript_ShinyTurtonator::
# 62 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 63 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_SHINY_FIRST_CHOICE, SPECIES_TURTONATOR
# 64 "data/maps/JaggedPass/scripts.pory"
	moncryscript SPECIES_TURTONATOR, JaggedPass_EventScript_ShinyTurtonator_Text_0, CRY_MODE_ENCOUNTER
# 65 "data/maps/JaggedPass/scripts.pory"
	setwildbattle SPECIES_TURTONATOR, 25, ITEM_SITRUS_BERRY
# 66 "data/maps/JaggedPass/scripts.pory"
	dowildbattle
# 67 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 68 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq JaggedPass_EventScript_ShinyTurtonator_2
JaggedPass_EventScript_ShinyTurtonator_1:
# 72 "data/maps/JaggedPass/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 73 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end

JaggedPass_EventScript_ShinyTurtonator_2:
# 69 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_JAGGED_TURTONATOR_SHINY
# 70 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_4
	goto JaggedPass_EventScript_ShinyTurtonator_1


JaggedPass_EventScript_Turtonator::
# 78 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_NO_SHINIES
# 79 "data/maps/JaggedPass/scripts.pory"
	moncryscript SPECIES_TURTONATOR, JaggedPass_EventScript_Turtonator_Text_0, CRY_MODE_ENCOUNTER
# 80 "data/maps/JaggedPass/scripts.pory"
	setwildbattle SPECIES_TURTONATOR, 25, ITEM_SITRUS_BERRY
# 81 "data/maps/JaggedPass/scripts.pory"
	dowildbattle
# 82 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 83 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq JaggedPass_EventScript_Turtonator_2
JaggedPass_EventScript_Turtonator_1:
# 87 "data/maps/JaggedPass/scripts.pory"
	clearflag FLAG_NO_SHINIES
# 88 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end

JaggedPass_EventScript_Turtonator_2:
# 84 "data/maps/JaggedPass/scripts.pory"
	removeobject LOCALID_JAGGED_TURTONATOR
# 85 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_TEMP_3
	goto JaggedPass_EventScript_Turtonator_1


# 93 "data/maps/JaggedPass/scripts.pory"

# 94 "data/maps/JaggedPass/scripts.pory"

# 95 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 96 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 97 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
# 98 "data/maps/JaggedPass/scripts.pory"
	end
# 99 "data/maps/JaggedPass/scripts.pory"

# 100 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 101 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 102 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 103 "data/maps/JaggedPass/scripts.pory"
	return
# 104 "data/maps/JaggedPass/scripts.pory"

# 105 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 106 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
# 107 "data/maps/JaggedPass/scripts.pory"
	return
# 108 "data/maps/JaggedPass/scripts.pory"

# 109 "data/maps/JaggedPass/scripts.pory"

# 110 "data/maps/JaggedPass/scripts.pory"

# 111 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 112 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 113 "data/maps/JaggedPass/scripts.pory"
	doweather
# 114 "data/maps/JaggedPass/scripts.pory"
	return
# 115 "data/maps/JaggedPass/scripts.pory"

# 116 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 117 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
# 118 "data/maps/JaggedPass/scripts.pory"
	end
# 119 "data/maps/JaggedPass/scripts.pory"

# 120 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 121 "data/maps/JaggedPass/scripts.pory"
	setmetatile 22, 17, METATILE_LavaridgeNew_RockWall, TRUE
# 122 "data/maps/JaggedPass/scripts.pory"
	setmetatile 22, 18, METATILE_LavaridgeNew_RockWall, TRUE
# 123 "data/maps/JaggedPass/scripts.pory"
	setmetatile 23, 17, METATILE_LavaridgeNew_RockWall, TRUE
# 124 "data/maps/JaggedPass/scripts.pory"
	setmetatile 23, 18, METATILE_LavaridgeNew_RockWall, TRUE
# 125 "data/maps/JaggedPass/scripts.pory"
	setmetatile 24, 17, METATILE_LavaridgeNew_RockWall, TRUE
# 126 "data/maps/JaggedPass/scripts.pory"
	setmetatile 24, 18, METATILE_LavaridgeNew_RockWall, TRUE
# 127 "data/maps/JaggedPass/scripts.pory"
	end
# 128 "data/maps/JaggedPass/scripts.pory"

# 129 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 130 "data/maps/JaggedPass/scripts.pory"
	lockall
# 131 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 132 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 133 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 134 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 135 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 136 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 137 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 138 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 139 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 140 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 141 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 142 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 143 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 144 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 145 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 146 "data/maps/JaggedPass/scripts.pory"
	setmetatile 22, 17, METATILE_NatureAlt_MountainTopDoorLeft, TRUE
# 147 "data/maps/JaggedPass/scripts.pory"
	setmetatile 22, 18, METATILE_NatureAlt_MountainTopDoor, TRUE
# 148 "data/maps/JaggedPass/scripts.pory"
	setmetatile 23, 17, METATILE_NatureAlt_MountainTopDoorRight, TRUE
# 149 "data/maps/JaggedPass/scripts.pory"
	setmetatile 23, 18, METATILE_NatureAlt_MountainDoorLeft, TRUE
# 150 "data/maps/JaggedPass/scripts.pory"
	setmetatile 24, 17, METATILE_NatureAlt_MountainDoor, TRUE
# 151 "data/maps/JaggedPass/scripts.pory"
	setmetatile 24, 18, METATILE_NatureAlt_MountainDoorRight, TRUE
# 152 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 153 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 154 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 155 "data/maps/JaggedPass/scripts.pory"
	waitse
# 156 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 157 "data/maps/JaggedPass/scripts.pory"
	end
# 158 "data/maps/JaggedPass/scripts.pory"

# 159 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 160 "data/maps/JaggedPass/scripts.pory"
	lockall
# 161 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 162 "data/maps/JaggedPass/scripts.pory"
	waitse
# 163 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 164 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 165 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 166 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_Delay48
# 167 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 168 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 169 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 170 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 171 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 172 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 173 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 174 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 175 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 176 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 177 "data/maps/JaggedPass/scripts.pory"
	end
# 178 "data/maps/JaggedPass/scripts.pory"

# 179 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 180 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 181 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 182 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 183 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 184 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 185 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 186 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 187 "data/maps/JaggedPass/scripts.pory"
	end
# 188 "data/maps/JaggedPass/scripts.pory"

# 189 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 190 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 191 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/JaggedPass/scripts.pory"
	end
# 193 "data/maps/JaggedPass/scripts.pory"

# 194 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 195 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
# 196 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 197 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
# 198 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 199 "data/maps/JaggedPass/scripts.pory"
	release
# 200 "data/maps/JaggedPass/scripts.pory"
	end
# 201 "data/maps/JaggedPass/scripts.pory"

# 202 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 203 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 204 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 205 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 206 "data/maps/JaggedPass/scripts.pory"
	release
# 207 "data/maps/JaggedPass/scripts.pory"
	end
# 208 "data/maps/JaggedPass/scripts.pory"

# 209 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 210 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 211 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 212 "data/maps/JaggedPass/scripts.pory"
	end
# 213 "data/maps/JaggedPass/scripts.pory"

# 214 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 215 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 216 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 217 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 218 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 219 "data/maps/JaggedPass/scripts.pory"
	release
# 220 "data/maps/JaggedPass/scripts.pory"
	end
# 221 "data/maps/JaggedPass/scripts.pory"

# 222 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 223 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 224 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 225 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 226 "data/maps/JaggedPass/scripts.pory"
	release
# 227 "data/maps/JaggedPass/scripts.pory"
	end
# 228 "data/maps/JaggedPass/scripts.pory"

# 229 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 230 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 231 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 232 "data/maps/JaggedPass/scripts.pory"
	end
# 233 "data/maps/JaggedPass/scripts.pory"

# 234 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 235 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
# 236 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/JaggedPass/scripts.pory"
	end
# 238 "data/maps/JaggedPass/scripts.pory"

# 239 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 240 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 241 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 242 "data/maps/JaggedPass/scripts.pory"
	end
# 243 "data/maps/JaggedPass/scripts.pory"

# 244 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 245 "data/maps/JaggedPass/scripts.pory"
	.string "El DESFILADERO del MONTE CENIZO…\p"
# 246 "data/maps/JaggedPass/scripts.pory"
	.string "Siempre he querido encontrar\n"
# 247 "data/maps/JaggedPass/scripts.pory"
	.string "una montaña como ésta.\p"
# 248 "data/maps/JaggedPass/scripts.pory"
	.string "Esta superficie irregular…\n"
# 249 "data/maps/JaggedPass/scripts.pory"
	.string "¡Me hace dar botes de alegría!$"
# 250 "data/maps/JaggedPass/scripts.pory"

# 251 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 252 "data/maps/JaggedPass/scripts.pory"
	.string "Perder me deja hecho polvo…$"
# 253 "data/maps/JaggedPass/scripts.pory"

# 254 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 255 "data/maps/JaggedPass/scripts.pory"
	.string "Sí, he perdido en el combate POKéMON…\p"
# 256 "data/maps/JaggedPass/scripts.pory"
	.string "¡Pero seguro que llego a cualquier\n"
# 257 "data/maps/JaggedPass/scripts.pory"
	.string "cima antes que tú!$"
# 258 "data/maps/JaggedPass/scripts.pory"

# 259 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 260 "data/maps/JaggedPass/scripts.pory"
	.string "Este lugar no es el típico al que viene\n"
# 261 "data/maps/JaggedPass/scripts.pory"
	.string "la gente a hacer picnics.$"
# 262 "data/maps/JaggedPass/scripts.pory"

# 263 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 264 "data/maps/JaggedPass/scripts.pory"
	.string "¡Ooooh, no!\n"
# 265 "data/maps/JaggedPass/scripts.pory"
	.string "¡El terreno es demasiado irregular!$"
# 266 "data/maps/JaggedPass/scripts.pory"

# 267 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 268 "data/maps/JaggedPass/scripts.pory"
	.string "¿Sabes una cosa?\p"
# 269 "data/maps/JaggedPass/scripts.pory"
	.string "Hay gente muy habilidosa que sube\n"
# 270 "data/maps/JaggedPass/scripts.pory"
	.string "en bici por este horrible camino\l"
# 271 "data/maps/JaggedPass/scripts.pory"
	.string "lleno de baches.$"
# 272 "data/maps/JaggedPass/scripts.pory"

# 273 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 274 "data/maps/JaggedPass/scripts.pory"
	.string "¿Piensas volver por aquí?\n"
# 275 "data/maps/JaggedPass/scripts.pory"
	.string "En ese caso, quiero mi revancha.$"
# 276 "data/maps/JaggedPass/scripts.pory"

# 277 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 278 "data/maps/JaggedPass/scripts.pory"
	.string "Los picnics son siempre divertidos,\n"
# 279 "data/maps/JaggedPass/scripts.pory"
	.string "¡pero los POKéMON lo son aún más!$"
# 280 "data/maps/JaggedPass/scripts.pory"

# 281 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 282 "data/maps/JaggedPass/scripts.pory"
	.string "¡He perdido, pero sólo porque\n"
# 283 "data/maps/JaggedPass/scripts.pory"
	.string "he metido el pie en un bache!$"
# 284 "data/maps/JaggedPass/scripts.pory"

# 285 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 286 "data/maps/JaggedPass/scripts.pory"
	.string "Mejor no pienso en la derrota y disfruto\n"
# 287 "data/maps/JaggedPass/scripts.pory"
	.string "de este paseo accidentado, ja, ja, ja.$"
# 288 "data/maps/JaggedPass/scripts.pory"

# 289 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 290 "data/maps/JaggedPass/scripts.pory"
	.string "Es difícil caminar por el DESFILADERO,\n"
# 291 "data/maps/JaggedPass/scripts.pory"
	.string "pero es lo mejor para entrenarse.$"
# 292 "data/maps/JaggedPass/scripts.pory"

# 293 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 294 "data/maps/JaggedPass/scripts.pory"
	.string "¡Oye, no es justo, que todavía estaba\n"
# 295 "data/maps/JaggedPass/scripts.pory"
	.string "intentando mantener el equilibrio!$"
# 296 "data/maps/JaggedPass/scripts.pory"

# 297 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 298 "data/maps/JaggedPass/scripts.pory"
	.string "Si tuviera una BICI ACROBÁTICA, podría\n"
# 299 "data/maps/JaggedPass/scripts.pory"
	.string "saltar sobre cualquier desnivel…$"
# 300 "data/maps/JaggedPass/scripts.pory"

# 301 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 302 "data/maps/JaggedPass/scripts.pory"
	.string "Este terreno está lleno de baches,\n"
# 303 "data/maps/JaggedPass/scripts.pory"
	.string "pero en cuanto me acostumbre ganaré.\p"
# 304 "data/maps/JaggedPass/scripts.pory"
	.string "¿Quieres registrarme en tu POKéNAV?$"
# 305 "data/maps/JaggedPass/scripts.pory"

# 306 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 307 "data/maps/JaggedPass/scripts.pory"
	.string "Me he acostumbrado a estos\n"
# 308 "data/maps/JaggedPass/scripts.pory"
	.string "baches y ahora son pan comido.$"
# 309 "data/maps/JaggedPass/scripts.pory"

# 310 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 311 "data/maps/JaggedPass/scripts.pory"
	.string "Sigue sin ser fácil luchar en este\n"
# 312 "data/maps/JaggedPass/scripts.pory"
	.string "terreno tan irregular…$"
# 313 "data/maps/JaggedPass/scripts.pory"

# 314 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 315 "data/maps/JaggedPass/scripts.pory"
	.string "Debería comprar a ANACLETO una BICI\n"
# 316 "data/maps/JaggedPass/scripts.pory"
	.string "ACROBÁTICA en CIUDAD MALVALONA…$"
# 317 "data/maps/JaggedPass/scripts.pory"

# 318 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 319 "data/maps/JaggedPass/scripts.pory"
	.string "¡Oye!\n"
# 320 "data/maps/JaggedPass/scripts.pory"
	.string "¿Qué haces tú aquí?\p"
# 321 "data/maps/JaggedPass/scripts.pory"
	.string "Ya puestos, ¿qué hago yo aquí?\p"
# 322 "data/maps/JaggedPass/scripts.pory"
	.string "Pero, sobre todo, ¿qué haces tú?$"
# 323 "data/maps/JaggedPass/scripts.pory"

# 324 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 325 "data/maps/JaggedPass/scripts.pory"
	.string "Aaargh…\p"
# 326 "data/maps/JaggedPass/scripts.pory"
	.string "Debería haberme ocultado en la\n"
# 327 "data/maps/JaggedPass/scripts.pory"
	.string "GUARIDA nada más verte…$"
# 328 "data/maps/JaggedPass/scripts.pory"

# 329 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 330 "data/maps/JaggedPass/scripts.pory"
	.string "¡Vale, vale, que sí!\n"
# 331 "data/maps/JaggedPass/scripts.pory"
	.string "Lo reconozco: ¡eres fuerte!\p"
# 332 "data/maps/JaggedPass/scripts.pory"
	.string "Y, desde luego, pienso dejarte\n"
# 333 "data/maps/JaggedPass/scripts.pory"
	.string "ir a donde te plazca…$"
# 334 "data/maps/JaggedPass/scripts.pory"

# 335 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 336 "data/maps/JaggedPass/scripts.pory"
	.string "¡Oh! ¡Se diría que esta roca está\n"
# 337 "data/maps/JaggedPass/scripts.pory"
	.string "temblando ante el SIGNO MAGMA!$"
# 338 "data/maps/JaggedPass/scripts.pory"

# 339 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 340 "data/maps/JaggedPass/scripts.pory"
	.string "¡Aaaah, qué susto! ¡No se puede\n"
# 341 "data/maps/JaggedPass/scripts.pory"
	.string "aparecer de repente, sin avisar!$"
# 342 "data/maps/JaggedPass/scripts.pory"

# 343 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 344 "data/maps/JaggedPass/scripts.pory"
	.string "Me has desinflado…$"
# 345 "data/maps/JaggedPass/scripts.pory"

# 346 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 347 "data/maps/JaggedPass/scripts.pory"
	.string "Tengo el trasero hecho polvo por culpa\n"
# 348 "data/maps/JaggedPass/scripts.pory"
	.string "de todos los baches que he pillado.$"
# 349 "data/maps/JaggedPass/scripts.pory"

# 350 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 351 "data/maps/JaggedPass/scripts.pory"
	.string "Subo esta cuesta cada día.\n"
# 352 "data/maps/JaggedPass/scripts.pory"
	.string "¡Estoy en forma!$"
# 353 "data/maps/JaggedPass/scripts.pory"

# 354 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 355 "data/maps/JaggedPass/scripts.pory"
	.string "Estoy sin aliento…\n"
# 356 "data/maps/JaggedPass/scripts.pory"
	.string "¿Cómo ha podido ocurrir?$"
# 357 "data/maps/JaggedPass/scripts.pory"

# 358 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 359 "data/maps/JaggedPass/scripts.pory"
	.string "¿Qué será esa extraña protuberancia\n"
# 360 "data/maps/JaggedPass/scripts.pory"
	.string "rocosa que hay arriba de la colina?$"

JaggedPass_EventScript_ShinyAbsol_Text_0:
# 33 "data/maps/JaggedPass/scripts.pory"
	.string "¡Sool!$"

JaggedPass_EventScript_Absol_Text_0:
# 48 "data/maps/JaggedPass/scripts.pory"
	.string "¡Aaaab!$"

JaggedPass_EventScript_ShinyTurtonator_Text_0:
# 64 "data/maps/JaggedPass/scripts.pory"
	.string "¡Tortuuu!$"

JaggedPass_EventScript_Turtonator_Text_0:
# 79 "data/maps/JaggedPass/scripts.pory"
	.string "¡Natoorr!$"
