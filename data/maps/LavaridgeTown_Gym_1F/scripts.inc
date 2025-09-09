# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_COLE, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_AXLE, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_KEEGAN, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_DANIELLE, TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_GERALD, TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JACE, TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JEFF, TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ELI, TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿Camino del CAMPEONATO?\p"
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "CANDELA, la LÍDER del GIMNASIO\n"
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de LAVACALDA, usa POKéMON\l"
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de tipo FUEGO.\p"
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Su pasión por los POKéMON es más\n"
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ardiente que la lava de un volcán.\p"
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡No te acerques mucho a ella\n"
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "si no quieres salir ardiendo!\p"
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Bájale los humos! ¡Ve a por ella!$"
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Guau! ¡Ha sido un combate al rojo vivo!$"
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Jo, jo, jo, jo!\n"
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Esto está que arde!$"
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "He acabado chamuscado…$"
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Si te entierras en arena caliente,\n"
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "mejoras la circulación de la sangre.\p"
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "También es muy bueno para curar\n"
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "el dolor de las articulaciones.$"
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Estoy intentando quitarme el estrés.\n"
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Deja de estresarme con tu presencia!$"
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Espero que CANDELA te queme\n"
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bien por los dos lados!$"
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Aaaah… Oooooh…\p"
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Después de estar enterrado en arena\n"
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "caliente un rato, te quedas en la gloria.$"
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Todo esto ha debido de cansarte.\n"
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿Quieres descansar un poco\l"
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "en la arena caliente?\p"
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Aunque debes saber que tener\n"
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "voluntad y resistencia es vital\l"
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "para todo ENTRENADOR.$"
# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Si juegas con fuego, te quemas…$"
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Tienes talento… Pero nuestra LÍDER,\n"
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "CANDELA, es muy fuerte.\p"
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Si no tienes cuidado, acabarás\n"
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "tostándote de lo lindo…$"
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¿Tus POKéMON soportan temperaturas\n"
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "superiores a los 200 ºC?$"
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No me he caldeado lo suficiente…$"
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "La temperatura del magma\n"
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "es de 200 ºC.\p"
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me has vencido, así que seguro que tus\n"
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "POKéMON pueden sobrevivir en el magma.$"
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Mmmm…\n"
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Bueno, vale, lucharé contigo.$"
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No esperaba que fueras tan fuerte…$"
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yo de mayor quiero ser tan fuerte\n"
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "y magnífica como CANDELA.$"
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Venga, no perdamos tiempo!\n"
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Estas cosas saben mejor en caliente!$"
# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me has aguado la fiesta…$"
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dentro de ti arde la llama del valor.\n"
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Quizás puedas vencer a nuestra LÍDER.$"
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Quien juega con fuego\n"
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "acaba quemándose!$"
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No sé qué, pero me ha fallado algo.$"
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Bueno, ¿y qué? ¡Da igual lo que dijera!\n"
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Si quiero, puedo caminar sobre brasas!\p"
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Pero ni se te ocurra intentarlo a ti!…$"
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me gustan todas las montañas,\n"
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "pero mi gran amor son los volcanes.$"
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Vaya, parece que me he despeñado.$"
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me voy a quedar aquí porque\n"
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "soy un fan perdido de CANDELA.\p"
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Je, je, je, je!$"
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hola… No, espera…\p"
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Me alegra ver que alguien tan\n"
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "enclenque ha llegado tan lejos!\p"
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me han confiado la tarea…\n"
# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No, espera…\p"
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Yo soy CANDELA, la LÍDER\n"
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de este GIMNASIO!\p"
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Eh, esto…\n"
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡No me subestimes porque haga\l"
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "poco tiempo que soy LÍDER!\p"
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Gracias a las habilidades heredadas de\n"
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "mi abuelo, yo, esto… ¡demostraré que\l"
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "nuestra ardiente técnica no tiene par!$"
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ooooh…\n"
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Creo que no estaba preparada…\p"
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yo… soy LÍDER de GIMNASIO\n"
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "desde hace poco tiempo…\p"
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "He intentando llegar muy alto\n"
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "demasiado rápido…\p"
# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Tengo que hacer las cosas con calma\n"
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "o mis POKéMON acabarán confusos…\p"
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Gracias por enseñarme eso.\n"
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "A cambio quiero darte algo.$"
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} recibió la MEDALLA CALOR\n"
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de CANDELA.$"
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Con la MEDALLA CALOR te obedecerán\n"
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "todos los POKéMON hasta el nivel 50,\l"
# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "incluso los que has intercambiado.\p"
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Y además podrás usar el movimiento\n"
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de la MO FUERZA fuera de los combates.\p"
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Esto otro es una muestra de mi\n"
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "aprecio. ¡No lo rechaces!$"
# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "La MT50 contiene SOFOCO.\p"
# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Este movimiento inflige un gran\n"
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "daño al oponente.\p"
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pero también baja el AT. ESP.\n"
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "del POKéMON que lo use. Puede\l"
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "no ser adecuado para combates largos.$"
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Acabas de registrar a CANDELA,\n"
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "la LÍDER de GIMNASIO, en el POKéNAV.$"
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Tu fuerza me recuerda a alguien…\p"
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Ah, ya sé! Luchas como NORMAN,\n"
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "el LÍDER del GIMNASIO de PETALIA.$"
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "GIMNASIO POKéMON de PUEBLO LAVACALDA$"
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "GIMNASIO POKéMON de PUEBLO LAVACALDA\p"
# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "CANDELA: ¡Una sola derrota no basta\n"
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "para echarme atrás!\p"
# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me encantan los POKéMON.\n"
# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me encanta combatir.\l"
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Y… ¡me encanta este GIMNASIO!\p"
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Vamos a hacer otro intercambio\n"
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de movimientos superguays!$"
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Aaaaah!\n"
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡A punto estoy de estallar!$"
# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "CANDELA: He perdido el combate,\n"
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "pero me siento muy satisfecha.\p"
# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No hay mucha gente que ponga\n"
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "tanto ardor en el combate como tú.\p"
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Tenemos que luchar pronto otra vez!$"
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "CANDELA: ¡Una sola derrota no basta\n"
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "para echarme atrás!\p"
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me encantan los POKéMON.\n"
# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Me encanta combatir.\l"
# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Y… ¡me encanta este GIMNASIO!\p"
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "¡Vamos a hacer otro intercambio\n"
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "de movimientos superguays!\p"
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pero, espera, ¿sólo tienes un POKéMON\n"
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "para combatir?\p"
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pues lo siento, pero tendrás que volver\n"
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "cuando tengas por lo menos dos.$"
