MauvilleCity_BattleCafe_MapScripts::
# 2 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_BattleCafe_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_BattleCafe_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special SetCafeTrainersToday
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle::
# 9 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special DoCafeTrainerBattle
# 10 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special GetCafeTrainersAfterBattleData
# 11 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	msgbox MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_0
# 12 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_2
MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_1:
# 16 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	closemessage
# 17 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	releaseall
	return

MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_2:
# 13 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	giveitem VAR_RESULT, 1
# 14 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	msgbox MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_1
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_1


MauvilleCity_BattleCafe_Scripts_DailyTrainer1::
# 21 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 22 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 23 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 0
# 24 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer2::
# 29 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 30 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 31 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 1
# 32 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer3::
# 36 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 37 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 38 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 2
# 39 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer4::
# 43 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 44 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 45 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 3
# 46 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_0:
# 11 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	.string "{STR_VAR_1}$"

MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_1:
# 14 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	.string "{STR_VAR_3}$"
