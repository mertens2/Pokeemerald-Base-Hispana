MauvilleCity_BattleCafe_MapScripts::
# 2 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_BattleCafe_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_BattleCafe_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special SetCafeTrainersToday
	return


MauvilleCity_BattleCafe_Scripts_SetUpDailyTrainersBattle::
# 9 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special DoCafeTrainerBattle
# 10 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	delay 16
# 11 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DoDailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DoDailyTrainersBattle::
# 14 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	waitbuttonpress
# 15 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	dotrainerbattle
# 16 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	delay 16
# 17 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special GetCafeTrainersAfterBattleData
# 19 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_BattleCafe_Scripts_DoDailyTrainersBattle_2
MauvilleCity_BattleCafe_Scripts_DoDailyTrainersBattle_1:
# 23 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	closemessage
# 24 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	releaseall
	return

MauvilleCity_BattleCafe_Scripts_DoDailyTrainersBattle_2:
# 20 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	giveitem VAR_RESULT, 1
# 21 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special GetCafeTrainersFinalText
	goto MauvilleCity_BattleCafe_Scripts_DoDailyTrainersBattle_1


MauvilleCity_BattleCafe_Scripts_DailyTrainer1::
# 28 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 29 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 30 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 0
# 31 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_SetUpDailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer2::
# 36 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 37 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 38 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 1
# 39 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_SetUpDailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer3::
# 43 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 44 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 45 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 2
# 46 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_SetUpDailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer4::
# 50 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 51 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 52 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 3
# 53 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_SetUpDailyTrainersBattle
	return

