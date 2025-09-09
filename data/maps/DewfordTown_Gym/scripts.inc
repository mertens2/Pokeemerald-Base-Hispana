# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_Gym/scripts.pory"

# 6 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 21 "data/maps/DewfordTown_Gym/scripts.pory"

# 22 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 25 "data/maps/DewfordTown_Gym/scripts.pory"

# 26 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 30 "data/maps/DewfordTown_Gym/scripts.pory"

# 31 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 34 "data/maps/DewfordTown_Gym/scripts.pory"

# 35 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 38 "data/maps/DewfordTown_Gym/scripts.pory"

# 39 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 42 "data/maps/DewfordTown_Gym/scripts.pory"

# 43 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 46 "data/maps/DewfordTown_Gym/scripts.pory"

# 47 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 50 "data/maps/DewfordTown_Gym/scripts.pory"

# 51 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 67 "data/maps/DewfordTown_Gym/scripts.pory"

# 68 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 70 "data/maps/DewfordTown_Gym/scripts.pory"

# 71 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 77 "data/maps/DewfordTown_Gym/scripts.pory"

# 78 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 83 "data/maps/DewfordTown_Gym/scripts.pory"

# 84 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 89 "data/maps/DewfordTown_Gym/scripts.pory"

# 90 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 95 "data/maps/DewfordTown_Gym/scripts.pory"

# 96 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 101 "data/maps/DewfordTown_Gym/scripts.pory"

# 102 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 107 "data/maps/DewfordTown_Gym/scripts.pory"

# 108 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 113 "data/maps/DewfordTown_Gym/scripts.pory"

# 114 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 135 "data/maps/DewfordTown_Gym/scripts.pory"

# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 144 "data/maps/DewfordTown_Gym/scripts.pory"

# 145 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 170 "data/maps/DewfordTown_Gym/scripts.pory"

# 171 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 177 "data/maps/DewfordTown_Gym/scripts.pory"

# 178 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 185 "data/maps/DewfordTown_Gym/scripts.pory"

# 186 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 190 "data/maps/DewfordTown_Gym/scripts.pory"

# 191 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 195 "data/maps/DewfordTown_Gym/scripts.pory"

# 196 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 200 "data/maps/DewfordTown_Gym/scripts.pory"

# 201 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 205 "data/maps/DewfordTown_Gym/scripts.pory"

# 206 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 210 "data/maps/DewfordTown_Gym/scripts.pory"

# 211 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 215 "data/maps/DewfordTown_Gym/scripts.pory"

# 216 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 220 "data/maps/DewfordTown_Gym/scripts.pory"

# 221 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 225 "data/maps/DewfordTown_Gym/scripts.pory"

# 226 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 230 "data/maps/DewfordTown_Gym/scripts.pory"

# 231 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 235 "data/maps/DewfordTown_Gym/scripts.pory"

# 236 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 240 "data/maps/DewfordTown_Gym/scripts.pory"

# 241 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 245 "data/maps/DewfordTown_Gym/scripts.pory"

# 246 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 250 "data/maps/DewfordTown_Gym/scripts.pory"

# 251 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 258 "data/maps/DewfordTown_Gym/scripts.pory"

# 259 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 263 "data/maps/DewfordTown_Gym/scripts.pory"

# 264 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 269 "data/maps/DewfordTown_Gym/scripts.pory"

# 270 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 275 "data/maps/DewfordTown_Gym/scripts.pory"

# 276 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 280 "data/maps/DewfordTown_Gym/scripts.pory"

# 281 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 285 "data/maps/DewfordTown_Gym/scripts.pory"

# 286 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¿Camino del CAMPEONATO?\p"
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MARCIAL, el LÍDER del GIMNASIO\n"
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "de AZULIZA, usa POKéMON de tipo\l"
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "LUCHA.\p"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Si lo desafías con POKéMON de tipo\n"
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "NORMAL, acabarás mal!\p"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Los POKéMON de tipo LUCHA pueden\n"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "acabar con los POKéMON de tipo NORMAL\l"
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "en un santiamén, así que ten cuidado…\p"
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Y lo que es aún peor: el GIMNASIO\n"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "está oscuro como boca de lobo.\p"
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pero se irá iluminando a medida\n"
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "que derrotes a los ENTRENADORES\l"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "que te encuentres en tu camino.\p"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Bueno, ¡ve a por él!$"
# 303 "data/maps/DewfordTown_Gym/scripts.pory"

# 304 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Guau! ¡Ahora sí que hay luz\n"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "para dar y tomar!\p"
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Y tu futuro también parece brillante!$"
# 308 "data/maps/DewfordTown_Gym/scripts.pory"

# 309 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Querer es poder!\n"
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Quiero derrotarte!$"
# 312 "data/maps/DewfordTown_Gym/scripts.pory"

# 313 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Tendría que haberlo querido más…$"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"

# 316 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Tu ingenio supera mi fuerza bruta.\n"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Tu técnica es insuperable!$"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"

# 320 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No es necesario molestar a MARCIAL…\p"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Te voy a aplastar!$"
# 323 "data/maps/DewfordTown_Gym/scripts.pory"

# 324 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pero… ¿cómo?\n"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¿Cómo he podido perder tan rápido?$"
# 327 "data/maps/DewfordTown_Gym/scripts.pory"

# 328 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No me voy a hundir por esto…\n"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Me motiva para seguir entrenando!\p"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Un día seré LÍDER de GIMNASIO…\p"
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, ¡seré CAMPEONA de la LIGA\n"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON!$"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"

# 335 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡No me lleves la contraria!\n"
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Vas a perder porque lo digo yo!$"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"

# 339 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Buaaaaaa!\n"
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡No es justooo!$"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"

# 343 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Lucho en la oscuridad para quitarme\n"
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "todos los miedos.\p"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pero, al estar tan oscuro, nunca he\n"
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "podido ver la cara de MARCIAL…$"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"

# 349 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Uaka!…\n"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¿Dando tumbos en la oscuridad?$"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"

# 353 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Bah…\n"
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡No quiero ni saber tu nombre!$"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"

# 357 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Mereces perderte y acabar otra vez\n"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "en la entrada!$"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"

# 361 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Vas a ver las agallas\n"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "que tiene un lobo de mar!$"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"

# 365 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pero ¿cómo ha pasado?\n"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Yo nunca pierdo de esta manera!$"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"

# 369 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Por todos los mares! ¡Mereces conocer\n"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a nuestro LIDER de GIMNASIO!$"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"

# 373 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Si quieres pasar, tendrás que hacerlo\n"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "por encima de mí!$"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"

# 377 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Grrrrr!\n"
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Una derrota humillante!$"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"

# 381 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Me has ganado a mí!\n"
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡A por la MEDALLA!$"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Soy MARCIAL!\n"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡El LÍDER del GIMNASIO de AZULIZA!\p"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "He templado mi carácter entre las\n"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "fieras olas de este lugar y me he\l"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "endurecido en esta oscura cueva.\p"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¿Quieres desafiarme?\n"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vamos a ver de qué eres capaz…$"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"

# 394 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Guau y doble guau! ¡Eres peor que\n"
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "un maremoto! No lo esperaba…\p"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Estoy hundido en la miseria!\p"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "De acuerdo. Te la has ganado.\n"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Toma esta MEDALLA de GIMNASIO!$"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"

# 401 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} recibió la MEDALLA PUÑO\n"
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "de MARCIAL.$"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"

# 405 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Con la MEDALLA PUÑO te obedecerán\n"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "todos los POKéMON hasta el nivel 30,\l"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "incluso los que has intercambiado.\p"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Y además podrás usar el movimiento de\n"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "la MO DESTELLO fuera de los combates.\p"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Si quieres, puedes usar también esta\n"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MÁQUINA TÉCNICA.$"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"

# 414 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "La MT08 contiene CORPULENCIA.\p"
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Es un movimiento que aumenta\n"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "las habilidades de ATAQUE y DEFENSA.\p"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"

# 420 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Acabas de registrar a MARCIAL,\n"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "el LÍDER de GIMNASIO, en el POKéNAV.$"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"

# 424 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Puedo ver que tu talento crecerá\n"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "tanto que dejarás atónitos a todos\l"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "los ENTRENADORES de HOENN!$"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"

# 429 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de PUEBLO AZULIZA$"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"

# 432 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de PUEBLO AZULIZA\p"
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 436 "data/maps/DewfordTown_Gym/scripts.pory"

# 437 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MARCIAL: Una ola puede retroceder,\n"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "pero siempre acaba en la orilla.\p"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Una enorme ola de talento como tú…,\n"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡sabía que no tardaría en volver!\p"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Muéstrame lo grande que te has hecho!$"
# 443 "data/maps/DewfordTown_Gym/scripts.pory"

# 444 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Guau!\n"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Otra vez me has llevado por delante!$"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"

# 448 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MARCIAL: Combatir es algo muy profundo.\n"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Nunca acabas de llegar al fondo.\l"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Igual que el mar de HOENN!$"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"

# 453 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MARCIAL: Una ola puede retroceder,\n"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "pero siempre acaba en la orilla.\p"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Una enorme ola de talento como tú…,\n"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡sabía que no tardaría en volver!\p"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Vaya, sólo tienes un POKéMON\n"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "disponible para luchar!\p"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Lo siento, pero tendrás que volver con\n"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "al menos dos si quieres combatir.$"
